#pragma once
#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();	
		Animal(const Animal &Model);
		Animal(std::string newName);
		Animal &operator=(const Animal &Model);
		virtual ~Animal();
		virtual void makeSound() const;
		virtual const std::string &getType() const;
};
