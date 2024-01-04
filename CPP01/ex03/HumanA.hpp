#pragma once
#include "Weapon.hpp"

//use ref

class HumanA {
	private:
		std::string Name;
		Weapon &weapon;
	public:	
		HumanA(std::string newName, Weapon &newWeapon);
		~HumanA();
		void attack();
};
