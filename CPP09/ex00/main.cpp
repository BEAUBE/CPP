#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
	BitcoinExchange test;
	if (ac != 2) {
		std::cout << "1 arg required" << std::endl; 
		return (0); }
	 
	test.exec(av[1]);
	(void)av;
}
