#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "RPN needs 1 arg" << std::endl;
		return (0);
	}
	RPN::exec(av[1]);
}
