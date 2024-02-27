#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
		std::cout << "default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& Model): Animal(Model) {
		std::cout << "Cat copy constructor called" << std::endl;
		*this = Model;
}

Cat& Cat::operator=(const Cat& Model) {
	std::cout << "Cat operator overload constructor called" << std::endl;
	if (this == &Model)
		return (*this);
	type = Model.getType();
	return (*this);
}

Cat::~Cat() {
	std::cout << "default Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
		std::cout << "*meow meow*" << std::endl;
}

const std::string &Cat::getType() const {
	return (type);
}
