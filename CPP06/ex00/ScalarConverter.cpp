#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &Model) {
	if (this == &Model)
		return (*this);
	return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &Model) {
	*this = Model;
}

bool isvalid(std::string str)
{
	if (str.find_first_not_of("0123456789.f") != std::string::npos)
	{
		std::cout << "character not accepted for convert" << std::endl;
		return (0);
	}
	return (1);
}

void ScalarConverter::convert(std::string &str) {
	std::cout << "Original str : " << str << std::endl;

	if (str == "-inff" || str == "-inf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	if (str == "+inff" || str == "+inf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	if (str == "nan" || str == "nanf") {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (str.length() == 1 && !std::isdigit(str[0]))
	{
		std::cout << "char detected" << std::endl;
		if (str[0] >= 0 && str[0] <= 31)
		{
			std::cout << "char : not displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(str[0]) << std::endl;
			std::cout << "double: " << static_cast<float>(str[0]) << std::endl;
		}
		else {
			std::cout << "char : " << str << std::endl;
			std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<float>(str[0]) << ".0" << std::endl;
		}
		return ;
	}

	if (!isvalid(str))
		return ;

	if (str[str.length() - 1] == 'f')
	{
		std::cout << "float detected" << std::endl;
		if (str.find_last_of(".") != str.find_first_of("."))
			std::cout << "at least 2 \'.\' in the float, error" << std::endl;
		else if (str.find_first_of("f") != str.length() - 1)
			std::cout << "more than one \'f\', error" << std::endl;
		else if (str.find_last_of(".") == str.length() - 2)
			std::cout << "bad format" << std::endl;
		else {
		
		std::cout << "valid float, convert is coming" << std::endl;
		}
		return ;
	}
	if (str.find_first_of(".") != std::string::npos) {
		if (str.find_last_of(".") != str.find_first_of("."))
			std::cout << "at least 2 \'.\' in the float, error" << std::endl;
		else if (str.find_last_of(".") == str.length() - 1)
			std::cout << "bad format" << std::endl;
		else {
		
		std::cout << "valid double, convert coming" << std::endl;
		}
		return ;
	}
	
	std::cout << "so this is an int ??" << std::endl;
}

ScalarConverter::~ScalarConverter() {
	
}

/*
		std::cout << "char: " << std::endl;
		std::cout << "int: " << std::endl;
		std::cout << "float: " << std::endl;
		std::cout << "double: " << std::endl;
*/
