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
		Master.signAForm(First);
		Master.executeForm(First);

		PresidentialPardonForm Third("my bad POTUS");	
		Master.signAForm(Third);
		Master.executeForm(Third);

		RobotomyRequestForm Second("form2");	
		Master.signAForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
/*	try {
		Bureaucrat Master("Master", 1);

		PresidentialPardonForm Scnd("formMaster");	
		Master.signAForm(Scnd);
		Master.executeForm(Scnd);

		RobotomyRequestForm Second("form2");	
		Master.signAForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
		Master.executeForm(Second);
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}*/
}

// penser a verifier toutes les exceptions
