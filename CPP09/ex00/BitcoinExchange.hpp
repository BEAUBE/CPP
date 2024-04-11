#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <stdlib.h>
#include <regex.h>

class BitcoinExchange {
	private:
		std::map<std::string, float> DB;
		bool preparation(std::string inFile);
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &Model);
		BitcoinExchange &operator=(const BitcoinExchange &Model);
		~BitcoinExchange();
		
		bool DBCreation();
		void exec(std::string inFile);
};
