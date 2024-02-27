#include "Bureaucrat.hpp"

Form::Form() : Name("default_name"), isSigned(0), signGrade(150), execGrade(150){
}

Form::Form(std::string newName, int newSignGrade, int newExecGrade) : Name(newName), isSigned(0), signGrade(newSignGrade), execGrade(newExecGrade) {
	if (newSignGrade > 150 || newExecGrade > 150)
		throw Form::GradeTooLowException();
	else if (newSignGrade < 1 || newExecGrade < 1)
		throw Form::GradeTooHighException();
/*	else
	{
		signGrade = newSignGrade;
		execGrade = newExecGrade;
	}*/
}

Form	&Form::operator=(const Form &Model) {
	if (this == &Model)
		return (*this);
	this->isSigned = Model.GetIsSigned();
	return (*this);
}

Form::Form(const Form &Model) : Name(Model.GetName()), isSigned(Model.GetIsSigned()), signGrade(Model.GetSignGrade()), execGrade(Model.GetExecGrade()) {
	*this = Model;
}

bool Form::beSigned(Bureaucrat &signatory) {
	if (signatory.GetGrade() > this->GetSignGrade())
	{
		throw Form::GradeTooLowException();
		return (0);
	}
	else
	{
		this->isSigned = 1;
		return (1);
	}
}

const std::string &Form::GetName() const {
	return (this->Name);
}

const bool &Form::GetIsSigned() const {
	return (this->isSigned);
}

const int &Form::GetSignGrade() const {
	return (this->signGrade);
}

const int &Form::GetExecGrade() const {
	return (this->execGrade);
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("The grade you asked for is too low (>150)");
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("The grade you asked for is too high (<1)");
}

Form::~Form() {}

std::ostream &operator<<(std::ostream &stream, const Form &ref) {
	if (ref.GetIsSigned())
		stream << "The Form " << ref.GetName() << " is already signed, he needed a minimum signGrade of " << ref.GetSignGrade() << " and needs a minimum execGrade of " << ref.GetExecGrade() << std::endl;
	else
		stream << "The Form " << ref.GetName() << " is not signed, it needs a minimum signGrade of " << ref.GetSignGrade() << " and needs a minimum execGrade of " << ref.GetExecGrade() << std::endl;
	return (stream);
}
