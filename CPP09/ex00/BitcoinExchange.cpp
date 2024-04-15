#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &Model) {
	*this = Model;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &Model) {
	if (this == &Model)
		return (*this);
	DB = Model.DB;
	return (*this);
}

bool parsDataLine(std::string &curLine) {
	if (curLine.find_first_not_of("1234567890-,.") != std::string::npos)
		return (0);

	const char *pattern = "^([0-9]{4})-([0-9]{2})-([0-9]{2}),([0-9]{0,7})(.[0-9]{0,7})$";
	regex_t re;
	

	if (regcomp(&re, pattern, REG_EXTENDED|REG_NOSUB)) {
		return (0);					
	}
	if (regexec(&re, curLine.c_str(), 1, NULL, 0)) {
		regfree(&re);
		return (0);
	}
	regfree(&re);

	std::string strDate = curLine.substr(0, 10);
	unsigned int year = std::strtod(strDate.substr(0, 4).c_str(), NULL);
	unsigned int month = std::strtod(strDate.substr(5, 2).c_str(), NULL);
	unsigned int day = std::strtod(strDate.substr(8, 2).c_str(), NULL);
//	std::cout << year << month << day << std::endl;

	if (year < 2009 || !month || month > 12 || !day || day > 31)
		return (0);
	if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
		return (0);
	if (day == 30 && month == 2)
		return (0);
	if (month == 2 && day == 29) {
		if ((!(year % 4) && (year % 100)) || !(year % 400))
		return (0);
	}

	std::string strVal = curLine.substr(11, curLine.size() - 11);
	if (strVal.find_first_of("-") != std::string::npos)
		return (0);
	if (strVal.find_first_of(".") != strVal.find_last_of("."))
		return (0);
	return (1);
}

bool parsInputLine(std::string &curLine) {
	if (curLine.find_first_not_of(" |1234567890-,.") != std::string::npos) {
		std::cerr << "bad input => " << curLine << std::endl;
		return (0); }

	const char *pattern = "^([0-9]{4})-([0-9]{2})-([0-9]{2}) | ([0-9]{0,})(.[0-9]{0,7})$";
	regex_t re;
	

	if (regcomp(&re, pattern, REG_EXTENDED|REG_NOSUB)) {
		std::cerr << "Error: returned by regcomp" << std::endl;
		return (0);	}
	if (regexec(&re, curLine.c_str(), 1, NULL, 0)) {
		std::cerr << "Error: bad input => " << curLine << std::endl;
		regfree(&re);
		return (0);
	}
	regfree(&re);

	std::string strDate = curLine.substr(0, 10);
	unsigned int year = static_cast<unsigned int>(std::strtod(strDate.substr(0, 4).c_str(), NULL));
	unsigned int month = static_cast<unsigned int>(std::strtod(strDate.substr(5, 2).c_str(), NULL));
	unsigned int day = static_cast<unsigned int>(std::strtod(strDate.substr(8, 2).c_str(), NULL));

	if (year < 2009 || !month || month > 12 || !day || day > 31) {
		std::cerr << "Error: bad input => " << curLine.substr(0, 10) << std::endl;
		return (0); }
	if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) {
		std::cerr << "Error: bad input => " << curLine.substr(0, 10) << std::endl;
		return (0); }
	if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)) {
		std::cerr << "Error: bad input => " << curLine.substr(0, 10) << std::endl;
		return (0); }
	if (day == 30 && month == 2) {
		std::cerr << "Error: bad input => " << curLine.substr(0, 10) << std::endl;
		return (0); }
	if (month == 2 && day == 29) {
		if ((year % 4) || !(year % 100) || (year % 400)) {
			std::cerr << "Error: bad input => " << curLine.substr(0, 10) << std::endl;
			return (0); }
	}

	std::string strVal = curLine.substr(13);
	if (strVal.find_first_of("-") == 0) {
		std::cerr << "Error: not a positive number => " << curLine.substr(13) << std::endl;
		return (0); }
	if (strVal.find_first_of("-|, ") != std::string::npos) {
		std::cerr << "Error: bad input: number not allowed => " << curLine.substr(13) << std::endl;
		return (0); }
	if (strVal.find_first_of(".") != strVal.find_last_of(".")) {
		std::cerr << "Error: bad input: number not allowed => " << curLine.substr(13) << std::endl;
		return (0); }
	float value = std::strtof(strVal.c_str(), NULL);
	if (value > 1000) {
		std::cerr << "Error: too large a number => " << curLine.substr(13) << std::endl;
		return (0); }
	return (1);
}

bool BitcoinExchange::DBCreation() {
	std::fstream file;
	std::string curLine;

	file.open("data.csv", std::fstream::in);
	if (!file.is_open()) {
		return (0);
	}

	getline(file, curLine);
	if (curLine != "date,exchange_rate") {
		std::cerr << "first line of data.csv not valid" << std::endl;
		file.close();
		return (0);
	}
	while (getline(file, curLine))
	{
		float value;
		std::string strVal;
		if (parsDataLine(curLine)) {
			strVal = curLine.substr(11, curLine.size() - 11);
			value = std::strtof(strVal.c_str(), NULL);

			std::map<std::string, float>::iterator it = DB.find(curLine.substr(0, 10));
			if (it != DB.end()) {
				file.close();
				std::cerr << "date present twice" << std::endl;
				return (0);
			}

			DB[curLine.substr(0, 10)] = value;
			
			//std::cout << curLine << " => " << curLine.substr(0, 10) << ", " <<  DB[curLine.substr(0, 10)] <<  std::endl;
		}
		else {
			file.close();
			return (0);
		}
	}
	file.close();
	return (1);
}

void BitcoinExchange::exec(std::string inFile) {
	if (!DBCreation()) {
		std::cerr << "error: couldn't create data base" << std::endl;
		return ;
	}
	std::cout << "DB theorically created successfully" << std::endl;	

	std::fstream file;
	std::string curLine;
	
	file.open(inFile.c_str(), std::fstream::in);
	if (!file.is_open()) {
		std::cerr << "couldn't open the file you asked for" << std::endl;
		return ;
	}
	getline(file, curLine);
	if (curLine != "date | value") {
		std::cerr << "first line of data.csv not valid" << std::endl;
		file.close();
		return ;
	}
	while (getline(file, curLine))
	{
		if (parsInputLine(curLine)) {
			float val;
			std::map<std::string, float>::iterator it = DB.find(curLine.substr(0, 10));
			if (it == DB.end()) {
				it = DB.upper_bound(curLine.substr(0, 10));
				if (it != DB.begin())
					it--;
			}
			val = std::strtof(curLine.substr(13).c_str(), NULL) * it->second;
			//std::cout << it->second << ", " << std::strtof(curLine.substr(13).c_str(), NULL) << std::endl;
			std::cout << curLine.substr(0, 10) << " => " << curLine.substr(13) << " = " << val << std::endl;
		}
	}
	file.close();
}
