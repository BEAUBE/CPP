#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) : AForm(newTarget, 72, 45), target(newTarget) {
		std::cout << "RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &Model) {
	*this = Model;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &Model) {
	if (this == &Model)
		return (*this);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!GetIsSigned())
		throw AForm::FormNotSigned();
	else if (GetSignGrade() < executor.GetGrade())
		throw AForm::GradeTooLowException();
	else 
	{
		std::srand(std::time(0));

		std::cout << "* making some drilling noise*" << std::endl;
		sleep(1);
		std::cout << "* handbrake *" << std::endl;
		sleep(1);
		std::cout << "* making drilling noise again *" << std::endl;
		if (std::rand() % 2)
			std::cout << executor.GetName() << " is now robotomized" << std::endl;
		else
			std::cout << "The robotomization failed..." << std::endl;
	}
}

const std::string &RobotomyRequestForm::GetTarget() const {
	return (this->target);
}

RobotomyRequestForm::~RobotomyRequestForm() {}
