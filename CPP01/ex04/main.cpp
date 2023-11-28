#include "Change.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		Change  TheMachine(av[1], av[2], av[3]);
		if (TheMachine.allok())
			TheMachine.execution();
	}
	else
		std::cout << "right number of arguments please" << std::endl;
}
