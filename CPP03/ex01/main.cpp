#include "ScavTrap.hpp"

int main() {

	std::cout << "take damage, heal, die, try to do something" << std::endl;

	ScavTrap Bob("Bob");

	Bob.takeDamage(99);
	Bob.attack("ennemy1");
	Bob.beRepaired(1);
	Bob.takeDamage(8);
	std::cout << "Normally he is dead" << std::endl;
	Bob.attack("ennemy1");
	Bob.beRepaired(1);
	Bob.guardGate();
	Bob.guardGate();


/*	ScavTrap Warrior("Warrior");

	for (int i = 0; i < 50; i++)
	{
		Warrior.attack("a branch");
		Warrior.attack("another branch");
	}*/
}
