#include "ClapTrap.hpp"

int main() {
	ClapTrap Bob("Bob");
	Bob.takeDamage(3);
	Bob.attack("ennemy1");
	Bob.beRepaired(1);
	Bob.takeDamage(8);
	Bob.attack("ennemy1");
}
