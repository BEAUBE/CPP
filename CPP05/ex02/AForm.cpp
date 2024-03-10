#include "Bureaucrat.hpp"

AForm::AForm() : Name("default_name"), isSigned(0), signGrade(150), execGrade(150){
}

AForm::AForm(std::string newName, int newSignGrade, int newExecGrade) : Name(newName), isSigned(0), signGrade(newSignGrade), execGrade(newExecGrade) {
	if (newSignGrade > 150 || newExecGrade > 150)
		throw AForm::GradeTooLowException();
	else if (newSignGrade < 1 || newExecGrade < 1)
		throw AForm::GradeTooHighException();
}

AForm	&AForm::operator=(const AForm &Model) {
	if (this == &Model)
		return (*this);
	this->isSigned = Model.GetIsSigned();
	return (*this);
}

AForm::AForm(const AForm &Model) : Name(Model.GetName()), isSigned(Model.GetIsSigned()), signGrade(Model.GetSignGrade()), execGrade(Model.GetExecGrade()) {
	*this = Model;
}

bool AForm::beSigned(Bureaucrat &signatory) {
	if (signatory.GetGrade() > this->GetSignGrade())
	{
		throw AForm::GradeTooLowException();
		return (0);
	}
	else
	{
		this->isSigned = 1;
		return (1);
	}
}

const std::string &AForm::GetName() const {
	return (this->Name);
}

const bool &AForm::GetIsSigned() const {
	return (this->isSigned);
}

const int &AForm::GetSignGrade() const {
	return (this->signGrade);
}

const int &AForm::GetExecGrade() const {
	return (this->execGrade);
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("The grade you asked for is too low (>150)");
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("The grade you asked for is too high (<1)");
}

const char *AForm::FormNotSigned::what() const throw() {
	return ("The form is not signed");
}

AForm::~AForm() {}

std::ostream &operator<<(std::ostream &stream, const AForm &ref) {
	if (ref.GetIsSigned())
		stream << "The Form " << ref.GetName() << " is already signed, he needed a minimum signGrade of " << ref.GetSignGrade() << " and needs a minimum execGrade of " << ref.GetExecGrade() << std::endl;
	else
		stream << "The Form " << ref.GetName() << " is not signed, it needs a minimum signGrade of " << ref.GetSignGrade() << " and needs a minimum execGrade of " << ref.GetExecGrade() << std::endl;
	return (stream);
}
