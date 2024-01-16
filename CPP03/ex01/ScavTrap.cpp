#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name) {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	gateInfo = 0;
}

ScavTrap::ScavTrap() : ClapTrap() {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	gateInfo = 0;
}

ScavTrap::ScavTrap(const ScavTrap& Model) {
	*this = Model;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& Model) {
	if (this == &Model)
		return (*this);
	this->HitPoints = Model.HitPoints;
	this->EnergyPoints = Model.EnergyPoints;
	this->AttackDamage = Model.AttackDamage;
	this->gateInfo = Model.gateInfo;
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

ScavTrap::~ScavTrap() {}
