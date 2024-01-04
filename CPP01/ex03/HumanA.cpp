#include "HumanA.hpp"

//use ref

HumanA::HumanA(std::string newName, Weapon &newWeapon): Name(newName), weapon(newWeapon) {
}

HumanA::~HumanA() {}

void HumanA::attack() {
		std::cout << this->Name << " attacks with their " << this->weapon.getType() << std::endl;
}
