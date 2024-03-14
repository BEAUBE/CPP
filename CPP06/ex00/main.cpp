#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	//ScalarConverter test(1);
	if (ac != 2)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (1);
	}
	ScalarConverter test;
	std::string to_convert;
	to_convert = av[1];
	test.convert(to_convert);
	
	
	(void)ac;
	(void)av;
}
