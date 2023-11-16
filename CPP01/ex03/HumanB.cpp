#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string newName) {
	this->Name = newName;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon newWeapon) {
	this->weapon = newWeapon;
}

void HumanB::attack() {
		std::cout << this->Name << " attacks with their " << this->weapon.getType() << std::endl;
}
