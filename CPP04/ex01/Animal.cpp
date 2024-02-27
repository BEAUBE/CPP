#include "Animal.hpp"

Animal::Animal() {
	std::cout << "default Animal constructor called" << std::endl;
	type = "defaultType";
}

Animal::Animal(const Animal &Model) {
	*this = Model;
	std::cout << "copy Animal constructor called" << std::endl;
}

Animal::Animal(std::string newType) {
	type = newType;
	std::cout << "overloaded Animal constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "default Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &Model) {
	if (this == &Model)
		return (*this);
	type = Model.getType();
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "*cock-a-doodle-doo*" << std::endl;
}

const std::string &Animal::getType() const {
	return (type);
}
