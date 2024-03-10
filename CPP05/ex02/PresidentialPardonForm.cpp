#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) : AForm(newTarget, 25, 5), target(newTarget) {
		std::cout << "PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &Model) {
	*this = Model;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &Model) {
	if (this == &Model)
		return (*this);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!GetIsSigned())
		throw AForm::FormNotSigned();
	else if (GetSignGrade() < executor.GetGrade())
		throw AForm::GradeTooLowException();
	else 
	{
		std::cout << executor.GetName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}

const std::string &PresidentialPardonForm::GetTarget() const {
	return (this->target);
}

PresidentialPardonForm::~PresidentialPardonForm() {}
