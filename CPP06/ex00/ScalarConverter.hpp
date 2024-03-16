#include <iostream>

class ScalarConverter {
	private:

	public:
		ScalarConverter(std::string str);
		ScalarConverter();
		ScalarConverter &operator=(const ScalarConverter &Model);
		ScalarConverter(const ScalarConverter &Model);
		~ScalarConverter();
		
		void convert(std::string &str);
};
