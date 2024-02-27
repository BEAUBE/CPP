#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string newName) {
	Name = newName;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap() {
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "overloaded ClapTrap constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& Model) {
	if (this == &Model)
		return (*this);
	this->Name = Model.Name;
	this->HitPoints = Model.HitPoints;
	this->EnergyPoints = Model.EnergyPoints;
	this->AttackDamage = Model.AttackDamage;
	std::cout << "overload operator= claptrap constructor called" << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& Model) {
	*this = Model;
	std::cout << "copy claptrap constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage" << std::endl;
	}
	else
		std::cout << "ClapTrap " << Name << " is dead" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (HitPoints <= 0)
		std::cout << "Claptrap " << Name << " already have 0 health points" << std::endl;
	else if (EnergyPoints <= 0)
		std::cout << "ClapTrap " << Name << " does not have any Energypointsleft" << std::endl;
	else
	{
		std::cout << "Claptrap " << Name << " lost " << amount << " health points" << std::endl;
		HitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (HitPoints <= 0)
		std::cout << "ClapTrap " << Name << " does not have any Hitpoints left" << std::endl;
	else if (EnergyPoints <= 0)
		std::cout << "ClapTrap " << Name << " does not have any Energypointsleft" << std::endl;
	else
	{
		EnergyPoints--;
		std::cout << "Claptrap " << Name << " recieved " << amount << " health points" << std::endl;
		HitPoints += amount;
	}
}

ClapTrap::~ClapTrap() {
		std::cout << "default claptrap destructor called" << std::endl;
}
