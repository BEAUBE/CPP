#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Form TooHigh("nop", 0, 0); }
	catch (Form::GradeTooHighException &err) {
		std::cout << err.what() << std::endl; }

	try {
		Form TooLow("nop", 155, 155); }
	catch (Form::GradeTooLowException &err) {
		std::cout << err.what() << std::endl; }


	Bureaucrat Master("Master", 1);
	Bureaucrat Rat("Rat", 150);
	Form Default_form;
	Form High("High", 1, 1);

	Rat.signForm(Default_form);
	try {
		Rat.signForm(High); }
	catch (Form::GradeTooLowException &err) {
		std::cout << err.what() << std::endl; }
	Master.signForm(High);
	Master.signForm(High);
		
}

// penser a verifier toutes les exceptions
