#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name) {
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap() {
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "Overloaded FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& Model) : ClapTrap(Model){
	*this = Model;
	std::cout << "copy FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& Model) {
	if (this == &Model)
		return (*this);
	this->HitPoints = Model.HitPoints;
	this->EnergyPoints = Model.EnergyPoints;
	this->AttackDamage = Model.AttackDamage;
	std::cout << "overload operator= FragTrap constructor called" << std::endl;
	return (*this);
}

void	FragTrap::highFiveGuys(void) {
	std::cout << Name << " wants to high five the rest of the team" << std::endl;
}

FragTrap::~FragTrap() {}
