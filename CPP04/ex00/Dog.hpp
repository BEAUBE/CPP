#pragma once
#include "Animal.hpp"

class Dog : public Animal {
	private:
	public:
	Dog();
	Dog(const Dog &Model);
	Dog &operator=(const Dog& Model);
	void makeSound() const;
	const std::string &getType() const;
	~Dog();
};
