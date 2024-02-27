#pragma once
#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();	
		WrongAnimal(const WrongAnimal &Model);
		WrongAnimal(std::string newName);
		virtual ~WrongAnimal();
		void makeSound() const;
		virtual const std::string &getType() const;
};
