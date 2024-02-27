#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "default WrongAnimal constructor called" << std::endl;
	type = "defaultType";
}

WrongAnimal::WrongAnimal(const WrongAnimal &Model) {
	*this = Model;
	std::cout << "copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType) {
	type = newType;
	std::cout << "overloaded WrongAnimal constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &Model) {
	if (this == &Model)
		return (*this);
	type = Model.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "default WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "*a very strange noise*" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return (type);
}
