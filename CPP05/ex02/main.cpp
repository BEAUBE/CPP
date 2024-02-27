#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	try {
		AForm TooHigh("nop", 0, 0); }
	catch (AForm::GradeTooHighException &err) {
		std::cout << err.what() << std::endl; }

	try {
		AForm TooLow("nop", 155, 155); }
	catch (AForm::GradeTooLowException &err) {
		std::cout << err.what() << std::endl; }


	Bureaucrat Master("Master", 1);
	Bureaucrat Rat("Rat", 150);
	AForm Default_form;
	AForm High("High", 1, 1);

	Rat.signAForm(Default_form);
	try {
		Rat.signAForm(High); }
	catch (AForm::GradeTooLowException &err) {
		std::cout << err.what() << std::endl; }
	Master.signAForm(High);
	Master.signAForm(High);
		
}

// penser a verifier toutes les exceptions
