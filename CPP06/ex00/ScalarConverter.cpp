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
	if (str.find_first_not_of("+-0123456789.f") != std::string::npos)
	{
		std::cout << "character not accepted for convert" << std::endl;
		return (0);
	}
	if (str.find_last_of("-") != str.find_first_of("-"))
	{
		std::cout << "at least 2 \'-\', error" << std::endl;
		return (0);
	}
	if (str.find_last_of("+") != str.find_first_of("+"))
	{
		std::cout << "at least 2 \'+\', error" << std::endl;
		return (0);
	}
	if ((str.find_first_of("-") != std::string::npos && str.find_first_of("-") != 0) ||
			(str.find_first_of("+") != std::string::npos && str.find_first_of("+") != 0))
	{
		std::cout << "bad format" << std::endl;
		return (0);
	}
	return (1);
}

//Float_to
void	FloatToChar(std::string &str) {
	char **endPtr = NULL;
	float res = static_cast<float>(std::strtod(str.c_str(), endPtr));

	if (res < 0.0 || res > 127.0 || res - (int)res != 0.0)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if ((res >= 0.0f && res <= 31.0f) || res == 127.0)
	{
		std::cout << "char: not displayable" << std::endl;
		return ;
	}
	std::cout << "char: " << static_cast<char>(res) << std::endl;
}


void FloatToInt(std::string str) {
	char **endPtr = NULL;
	long long res = std::strtoll(str.c_str(), endPtr, 10);

	if (res > 2147483647.0 || res < -2147483648.0)
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << static_cast<int>(res) << std::endl;
}

void	FloatToFloat(std::string str) {
	char **endPtr = NULL;
	float res = static_cast<float>(std::strtod(str.c_str(), endPtr));

	if (res - (int)res != 0 || res > 1000000 || res < -1000000)
		std::cout << "float: " << res << "f" << std::endl;
	else
		std::cout << "float: " << res << ".0f" << std::endl;
}

void	FloatToDouble(std::string str) {
	char **endPtr = NULL;
	double res = std::strtod(str.c_str(), endPtr);

	if (res - (int)res != 0 || res > 1000000 || res < -1000000)
		std::cout << "double: " << res << std::endl;
	else
		std::cout << "double: " << res << ".0" << std::endl;
}

//Double_to
void	DoubleToChar(std::string &str) {
	char **endPtr = NULL;
	double res = std::strtod(str.c_str(), endPtr);

	if (res < 0.0 || res > 127.0 || res - (int)res != 0.0)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if ((res >= 0.0 && res <= 31.0) || res == 127.0)
	{
		std::cout << "char: not displayable" << std::endl;
		return ;
	}
	std::cout << "char: " << static_cast<char>(res) << std::endl;
}


void DoubleToInt(std::string str) {
	char **endPtr = NULL;
	long long res = std::strtoll(str.c_str(), endPtr, 10);

	if (res > 2147483647.0 || res < -2147483648.0)
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << static_cast<int>(res) << std::endl;
}

void	DoubleToFloat(std::string str) {
	char **endPtr = NULL;
	double res = std::strtod(str.c_str(), endPtr);

	if (res - (int)res != 0 || res > 1000000 || res < -1000000)
		std::cout << "float: " << static_cast<float>(res) << "f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(res) << ".0f" << std::endl;
}

void	DoubleToDouble(std::string str) {
	char **endPtr = NULL;
	double res = std::strtod(str.c_str(), endPtr);

	if (res - (int)res != 0 || res > 1000000 || res < -1000000)
		std::cout << "double: " << res << std::endl;
	else
		std::cout << "double: " << res << ".0" << std::endl;
}

//int_to
void	IntToChar(std::string &str) {
	char **endPtr = NULL;
	double res = std::strtod(str.c_str(), endPtr);

	if (res < 0.0 || res > 127.0 || res - (int)res != 0.0)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if ((res >= 0.0 && res <= 31.0) || res == 127.0)
	{
		std::cout << "char: not displayable" << std::endl;
		return ;
	}
	std::cout << "char: " << static_cast<char>(res) << std::endl;
}


void IntToInt(std::string str) {
	char **endPtr = NULL;
	long long res = std::strtoll(str.c_str(), endPtr, 10);

	if (res > 2147483647.0 || res < -2147483648.0)
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << static_cast<int>(res) << std::endl;
}

void	IntToFloat(std::string str) {
	char **endPtr = NULL;
	double res = std::strtod(str.c_str(), endPtr);

	if (res - (int)res != 0 || res > 1000000 || res < -1000000)
		std::cout << "float: " << static_cast<float>(res) << "f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(res) << ".0f" << std::endl;
}

void	IntToDouble(std::string str) {
	char **endPtr = NULL;
	double res = std::strtod(str.c_str(), endPtr);

	if (res - (int)res != 0 || res > 1000000 || res < -1000000)
		std::cout << "double: " << res << std::endl;
	else
		std::cout << "double: " << res << ".0" << std::endl;
}

void ScalarConverter::convert(std::string &str) {
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
		if ((str[0] >= 0 && str[0] <= 31) || str[0] == 127)
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
		if (str.find_last_of(".") != str.find_first_of("."))
			std::cout << "at least 2 \'.\' in the float, error" << std::endl;
		else if (str.find_first_of("f") != str.length() - 1)
			std::cout << "more than one \'f\', error" << std::endl;
		else if (str.find_last_of(".") == str.length() - 2 || str.find_first_of(".") == std::string::npos)
			std::cout << "bad format" << std::endl;

		else {
			FloatToChar(str);
			FloatToInt(str);
			FloatToFloat(str);
			FloatToDouble(str);
		}
		return ;
	}

	if (str.find_first_of("f") != std::string::npos)
	{
		std::cout << "bad format" << std::endl;
		return ;
	}

	if (str.find_first_of(".") != std::string::npos) {
		if (str.find_last_of(".") != str.find_first_of("."))
			std::cout << "at least 2 \'.\' in the float, error" << std::endl;
		else if (str.find_last_of(".") == str.length() - 1)
			std::cout << "bad format" << std::endl;

		else {
			DoubleToChar(str);
			DoubleToInt(str);
			DoubleToFloat(str);
			DoubleToDouble(str);
		}
		return ;
	}

	IntToChar(str);
	IntToInt(str);
	IntToFloat(str);
	IntToDouble(str);
}

ScalarConverter::~ScalarConverter() {
	
}
