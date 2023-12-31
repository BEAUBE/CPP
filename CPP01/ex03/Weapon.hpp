#pragma once
#include <iostream>

class Weapon {
	private:
		std::string	type;
	public:
		Weapon();
		Weapon(std::string weaponName);
		~Weapon();
		const std::string &getType() const;
		void setType(std::string);
};
