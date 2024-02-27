#pragma once
#include "Animal.hpp"

class Cat : public Animal {
	private:
	public:
	Cat();
	Cat(const Cat &Model);
	Cat &operator=(const Cat& Model);
	void makeSound() const;
	const std::string &getType() const;
	~Cat();
};
