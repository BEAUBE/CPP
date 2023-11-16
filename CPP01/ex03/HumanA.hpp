#pragma once
#include "Weapon.hpp"

class HumanA {
	private:
		std::string Name;
		Weapon weapon;
	public:	
		HumanA();
		HumanA(std::string newName, Weapon weapon);
		~HumanA();
		void attack();
};
