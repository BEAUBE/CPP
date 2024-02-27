#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
		std::cout << "default Cat constructor called" << std::endl;
		Brain = new class Brain();
}

Cat::Cat(const Cat& Model): Animal(Model) {
		std::cout << "Cat copy constructor called" << std::endl;
		Brain = new class Brain(*Model.Brain);
		*this = Model;
}

Cat& Cat::operator=(const Cat& Model) {
	std::cout << "Cat operator overload called" << std::endl;
	if (this == &Model)
		return (*this);
	type = Model.getType();
	return (*this);
}

Cat::~Cat() {
	std::cout << "default Cat destructor called" << std::endl;
	delete this->Brain;
}

void Cat::makeSound() const {
		std::cout << "*meow meow*" << std::endl;
}

const std::string &Cat::getType() const {
	return (type);
}

const std::string &Cat::GetBrainIdea(int i) const {
	return (this->Brain->GetIdea(i));
}

void Cat::SetBrainIdea(int i, std::string str) const {
	Brain->SetIdea(i, str);
}
