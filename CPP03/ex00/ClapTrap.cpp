#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default ClapTrap constructor called" << std::endl;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	Name = "Default";
}

ClapTrap::ClapTrap(std::string newName) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
	Name = newName;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& Model) {
	*this = Model;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& Model) {
	if (this == &Model)
		return (*this);
	this->Name = Model.Name;
	this->HitPoints = Model.HitPoints;
	this->EnergyPoints = Model.EnergyPoints;
	this->AttackDamage = Model.EnergyPoints;
	return (*this);
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
		std::cout << "ClapTrap " << Name << " already have 0 health points" << std::endl;
	else if (EnergyPoints <= 0)
		std::cout << "ClapTrap " << Name << " does not have any Energypoints left" << std::endl;
	else
	{
		std::cout << "ClapTrap " << Name << " lost " << amount << " health points" << std::endl;
		HitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->HitPoints <= 0)
		std::cout << "ClapTrap " << Name << " does not have any Hitpoints left" << std::endl;
	else if (this->EnergyPoints <= 0)
		std::cout << "ClapTrap " << Name << " does not have any Energypoints left" << std::endl;
	else
	{
		EnergyPoints--;
		std::cout << "ClapTrap " << Name << " recieved " << amount << " Heal points" << std::endl;
		HitPoints += amount;
	}
}

ClapTrap::~ClapTrap() {
		std::cout << "Default ClapTrap destructor called" << std::endl;
}
