#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
		std::cout << "default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& Model): Animal(Model) {
		std::cout << "Dog copy constructor called" << std::endl;
		*this = Model;
}

Dog& Dog::operator=(const Dog& Model) {
	std::cout << "dog operator overload constructor called" << std::endl;
	if (this == &Model)
		return (*this);
	type = Model.getType();
	return (*this);
}

Dog::~Dog() {
	std::cout << "default Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
		std::cout << "*Woof Woof*" << std::endl;
}

const std::string &Dog::getType() const {
	return (type);
}
