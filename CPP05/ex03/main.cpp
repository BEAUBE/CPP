#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat tester("tester", 1);
		tester.signForm(*rrf);
		tester.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &err){
		std::cerr << err.what() << std::endl;
	}

	try
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat tester("tester", 1);
		tester.signForm(*rrf);
		tester.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &err){
		std::cerr << err.what() << std::endl;
	}

	try
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat tester("tester", 1);
		tester.signForm(*rrf);
		tester.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &err){
		std::cerr << err.what() << std::endl;
	}

	try
	{
		Intern someRandomIntern;
		AForm *rrf;
		rrf = someRandomIntern.makeForm("nonsense", "Bender");
		Bureaucrat tester("tester", 1);
		tester.signForm(*rrf);
		tester.executeForm(*rrf);
		delete rrf;
	}
	catch (std::exception &err){
		std::cerr << err.what() << std::endl;
	}

}
