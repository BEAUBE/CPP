#pragma once
#include "HumanA.hpp"
#include "Weapon.hpp"

//use pointer

class HumanB {
	private:
		std::string Name;
		Weapon *weapon;
	public:	
		HumanB(std::string newName);
		~HumanB();
		void setWeapon(Weapon &newWeapon);
		void attack();
};
