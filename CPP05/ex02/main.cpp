#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Bureaucrat Master("Master", 1);

		ShrubberyCreationForm First("formMaster");	
		Master.signForm(First);
		Master.executeForm(First);

		RobotomyRequestForm Second("form2");	
		Master.signForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);

		PresidentialPardonForm Third("my bad POTUS");	
		Master.signForm(Third);
		Master.executeForm(Third);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
	try {
		Bureaucrat Noob("Noob", 150);

		PresidentialPardonForm Scnd("formMaster");	
		Noob.signForm(Scnd);
		Noob.executeForm(Scnd);

		RobotomyRequestForm Second("form2");	
		Noob.signForm(Second);
		Noob.executeForm(Second);
		Noob.executeForm(Second);
		Noob.executeForm(Second);
		Noob.executeForm(Second);
		Noob.executeForm(Second);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
}
