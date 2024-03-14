#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

void ScalarConverter::convert(std::string &str) {
	std::cout << "Original str : " << str << std::endl;

	if (str == "-inff" || str == "-inf") {
		std::cout << "char: not in range" << std::endl;
		std::cout << "int: not in range" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return ;
	}
	if (str == "+inff" || str == "+inf") {
		std::cout << "char: not in range" << std::endl;
		std::cout << "int: not in range" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return ;
	}
	if (str == "nan" || str == "nanf") {
		std::cout << "char: not in range" << std::endl;
		std::cout << "int: not in range" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (str.length() == 1 && !std::isdigit(str[0])
	{
		if (str[0] >= 0 && str[0] <= 31)
			std::cout << "char : not displayable" << std::endl;
		
	}
}

ScalarConverter::~ScalarConverter() {
	
}

/*
		std::cout << "char: " << 
		std::cout << "int: " << 
		std::cout << "float: " << 
		std::cout << "double: " << 
*/
