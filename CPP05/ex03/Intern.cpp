#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

AForm *Intern::makeForm(std::string type, std::string target) {
		int i = 0;
		std::string formTab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

		while (i < 3)
		{
			if (type == formTab[i])
				break;
			i++;
		}
		if (i != 3)
			std::cout << "Intern makes " << type << " form" << std::endl;

		switch (i) {
			case 0:
				return (new ShrubberyCreationForm(target));
			case 1:
				return (new RobotomyRequestForm(target));
			case 2:
				return (new PresidentialPardonForm(target));
			default:
				throw UnknowTypeException();
		}
}

const char *Intern::UnknowTypeException::what() const throw() {
	return ("The form type is unknow");
}

Intern::Intern() {
	
}

Intern::Intern(const Intern &Model) {
	*this = Model;
}

Intern &Intern::operator=(const Intern &Model) {
	if (this == &Model)
		return (*this);
	return (*this);
}

Intern::~Intern() {}
