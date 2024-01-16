#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	FragTrap Bob("Bob");

	Bob.takeDamage(99);
	Bob.attack("ennemy1");
	Bob.beRepaired(1);
	Bob.takeDamage(8);
	std::cout << "Normally he is dead" << std::endl;
	Bob.attack("ennemy1");
	Bob.beRepaired(1);

/*	FragTrap Warrior("Warrior");

	for (int i = 0; i < 51; i++)
	{
		Warrior.attack("a branch");
		Warrior.attack("another branch");
	}*/
}
