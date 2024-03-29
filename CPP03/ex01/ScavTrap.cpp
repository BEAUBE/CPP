#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	gateInfo = 0;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap() {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	gateInfo = 0;
	std::cout << "Overloaded ScavTrap constructor called" << std::endl;
}
void	ScavTrap::attack(const std::string& target) {
	if (this->HitPoints <= 0)
		std::cout << "ScavTrap " << Name << " does not have any Hitpoints left" << std::endl;
	else if (this->EnergyPoints <= 0)
		std::cout << "ScavTrap " << Name << " does not have any EnergyPoints left" << std::endl;
	else
	{
		EnergyPoints--;
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage" << std::endl;
	}
}

ScavTrap::ScavTrap(const ScavTrap& Model) {
	*this = Model;
	std::cout << "copy ScavTrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& Model) {
	if (this == &Model)
		return (*this);
	this->HitPoints = Model.HitPoints;
	this->EnergyPoints = Model.EnergyPoints;
	this->AttackDamage = Model.AttackDamage;
	this->gateInfo = Model.gateInfo;
	std::cout << "overload operator= ScavTrap constructor called" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate() {
	if (!gateInfo)
	{
		std::cout << Name << " is now in Gate keeper mode" << std::endl;
		gateInfo = 1;
	}
	else
		std::cout << Name << " is already in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "default ScavTrap destructor called" << std::endl;
}
