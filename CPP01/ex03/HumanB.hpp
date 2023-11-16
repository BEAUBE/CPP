#pragma once
#include "HumanA.hpp"
#include "Weapon.hpp"

class HumanB {
	private:
		std::string Name;
		Weapon weapon;
	public:	
		HumanB();
		HumanB(std::string newName);
		~HumanB();
		void setWeapon(Weapon newWeapon);
		void attack();
};
