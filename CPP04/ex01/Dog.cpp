#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
		std::cout << "default Dog constructor called" << std::endl;
		Brain = new class Brain();
}

Dog::Dog(const Dog& Model): Animal(Model) {
		std::cout << "Dog copy constructor called" << std::endl;
		Brain = new class Brain(*Model.Brain);
		*this = Model;
}

Dog& Dog::operator=(const Dog& Model) {
	std::cout << "Dog operator overload called" << std::endl;
	if (this == &Model)
		return (*this);
	type = Model.getType();
	return (*this);
}

Dog::~Dog() {
	std::cout << "default Dog destructor called" << std::endl;
	delete this->Brain;
}

void Dog::makeSound() const {
		std::cout << "*Woof woof*" << std::endl;
}

const std::string &Dog::getType() const {
	return (type);
}

const std::string &Dog::GetBrainIdea(int i) const {
	return (this->Brain->GetIdea(i));
}

void Dog::SetBrainIdea(int i, std::string str) const {
	Brain->SetIdea(i, str);
}
