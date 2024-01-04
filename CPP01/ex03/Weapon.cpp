#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string weaponName){
	this->type = weaponName;
}

Weapon::~Weapon() {}

void Weapon::setType(std::string newType) {
	this->type = newType;
}

const std::string	&Weapon::getType() const {
		return (this->type);
}
