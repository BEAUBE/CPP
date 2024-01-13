#include "ClapTrap.hpp"

//if no healthpoints

ClapTrap::ClapTrap(std::string newName) {
	Name = newName;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "default constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->HitPoints)
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage" << std::endl;
	}
	else
		std::cout << "ClapTrap " << Name << "does not have any Hitpoints left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!HitPoints)
		std::cout << "Claptrap " << Name << " already have 0 health points" << std::endl;
	else if (!EnergyPoints)
		std::cout << "ClapTrap " << Name << " does not have any Energypointsleft" << std::endl;
	else
	{
		std::cout << "Claptrap " << Name << " lost " << amount << " health points" << std::endl;
		HitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!HitPoints)
		std::cout << "ClapTrap " << Name << "does not have any Hitpoints left" << std::endl;
	else if (!EnergyPoints)
		std::cout << "ClapTrap " << Name << " does not have any Energypointsleft" << std::endl;
	else
	{
		EnergyPoints--;
		std::cout << "Claptrap " << Name << " recieved " << amount << " health points" << std::endl;
		HitPoints += amount;
	}
}

ClapTrap::~ClapTrap() {
		std::cout << "default destructor called" << std::endl;
}
