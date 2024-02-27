#pragma once
#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();	
		WrongAnimal(std::string newName);
		WrongAnimal(const WrongAnimal &Model);
		WrongAnimal &operator=(const WrongAnimal &Model);
		virtual ~WrongAnimal();
		void makeSound() const;
		virtual const std::string &getType() const;
};
