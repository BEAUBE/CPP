#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &Model) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->Ideas[i] = Model.Ideas[i];
}

Brain &Brain::operator=(const Brain &Model) {
	std::cout << "Brain overload= called" << std::endl;
	if (this == &Model)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->Ideas[i] = Model.Ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain default destructor called" << std::endl;
}

void	Brain::SetIdea(const int n, std::string str) {
	this->Ideas[n] = str;
}

std::string &Brain::GetIdea(const int n) {
	return (Ideas[n]);
}

std::string *Brain::GetIdeas() {
	return (Ideas);
}
