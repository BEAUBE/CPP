#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
		std::cout << "default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& Model): WrongAnimal(Model) {
		std::cout << "WrongCat copy constructor called" << std::endl;
		*this = Model;
}

WrongCat& WrongCat::operator=(const WrongCat& Model) {
	std::cout << "WrongCat operator overload constructor called" << std::endl;
	if (this == &Model)
		return (*this);
	type = Model.getType();
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "default WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
		std::cout << "*shy mow mew*" << std::endl;
}

const std::string &WrongCat::getType() const {
	return (type);
}
