#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap() : ClapTrap() {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

FragTrap::FragTrap(const FragTrap& Model) {
	*this = Model;
}

FragTrap &FragTrap::operator=(const FragTrap& Model) {
	if (this == &Model)
		return (*this);
	this->HitPoints = Model.HitPoints;
	this->EnergyPoints = Model.EnergyPoints;
	this->AttackDamage = Model.AttackDamage;
	return (*this);
}

void	FragTrap::highFiveGuys(void) {
	std::cout << Name << " wants to high five the rest of the team" << std::endl;
}

FragTrap::~FragTrap() {}
