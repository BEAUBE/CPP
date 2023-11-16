#include "HumanA.hpp"

HumanA::HumanA() {}

HumanA::HumanA(std::string newName, Weapon newWeapon) {
	this->Name = newName;
	this->weapon = newWeapon;
}

HumanA::~HumanA() {}

void HumanA::attack() {
		std::cout << this->Name << " attacks with their " << this->weapon.getType() << std::endl;
}
