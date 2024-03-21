#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("Default") {
	std::cout << "default Bureaucrat constructor called" << std::endl;
	Grade = 150;
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade) : Name(newName) {
	std::cout << "Overloaded Bureaucrat constructor called" << std::endl;
	if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (newGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		Grade = newGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Model) : Name(Model.GetName()){
	std::cout << "copy Bureaucrat constructor called" << std::endl;
	*this = Model;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "default Bureaucrat destructor called" << std::endl;
}

void Bureaucrat::signForm(AForm &refAForm) {
	if (refAForm.GetIsSigned())
		std::cout << Name << " couldn't sign " << refAForm.GetName() << " because it's already signed" << std::endl;
	else if (refAForm.GetSignGrade() < this->Grade)
		std::cout << Name << " couldn't sign " << refAForm.GetName() << " because the grade is not high enough" << std::endl;
	else 
	{
		std::cout << Name << " signed the form " << refAForm.GetName() << std::endl;
		refAForm.beSigned(*this);
	}
}

void Bureaucrat::executeForm(AForm const &form) {
	//si grade bon et form signe
	if (!form.GetIsSigned())
		std::cout << "the form " << form.GetName() << " is not signed" << std::endl;
	else if (form.GetExecGrade() < Grade) 
		std::cout << "the form " << form.GetName() << " require a higher grade" << std::endl;
	else {
		form.execute(*this);
		std::cout << "Bureaucrat " << Name << " executed form " << form.GetName() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("The grade you asked for is too high (<1)");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("The grade you asked for is too low (>150)");
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Model) {
	if (this == &Model)
		return (*this);
	return (*this);
}

void Bureaucrat::incGrade() {
	if (this->Grade - 1 < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		return ;
	}
	this->Grade--;
}

void Bureaucrat::decGrade() {
	if (this->Grade + 1 > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		return ;
	}
	this->Grade++;
}

/*
Bureaucrat &Bureaucrat::operator++(void) {
	if (this->Grade - 1 < 1)
		{
			throw Bureaucrat::TooHighGrade();
			return (*this);
		}
	this->Grade--;
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int) {
	if (this->Grade - 1 < 1)
	{
		throw Bureaucrat::TooHighGrade();
		return (*this);
	}

	Bureaucrat rtrn;

	rtrn.Grade = this->Grade--;
	return (rtrn);
}

Bureaucrat &Bureaucrat::operator--(void) {
	if (this->Grade + 1 > 150)
	{
		throw Bureaucrat::TooLowGrade();
		return (*this);
	}
	this->Grade++;
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int) {
	if (this->Grade + 1 > 150)
	{
		throw Bureaucrat::TooLowGrade();
		return (*this);
	}
	Bureaucrat rtrn;

	rtrn.Grade = this->Grade++;
	return (rtrn);
}
*/
const std::string &Bureaucrat::GetName() const {
	return (Name);
}

int Bureaucrat::GetGrade() const {
	return (Grade);
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &ref) {
	stream << ref.GetName() << ", bureaucrat Grade " << ref.GetGrade();
	return (stream);
}
