#include "ClapTrap.hpp"

int main() {
	ClapTrap Bob("Bob");
	Bob.takeDamage(8);
	Bob.attack("ennemy1");
	Bob.beRepaired(1);
	Bob.takeDamage(8);
	Bob.attack("ennemy1");
	Bob.beRepaired(1);
	
	ClapTrap Got = Bob;
	Got.attack("caca");

	
	std::cout << std::endl << "out of EnergyPoints" << std::endl;
	ClapTrap Alex("Alex");
	Alex.attack("ennemy1");
	Alex.beRepaired(1);
	Alex.attack("ennemy1");
	Alex.beRepaired(1);
	Alex.attack("ennemy1");
	Alex.beRepaired(1);
	Alex.attack("ennemy1");
	Alex.beRepaired(1);
	Alex.attack("ennemy1");
	Alex.beRepaired(1);
	std::cout << "10 actions done" << std::endl;
	Alex.attack("ennemy1");
	Alex.beRepaired(1);
}
