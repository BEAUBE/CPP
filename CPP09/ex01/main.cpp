#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error" << std::endl;
		return (0);
	}
	RPN executor;
	if (!executor.exec(av[1])) {
		std::cout << "Error" << std::endl;
	}
}
