#include "Bureaucrat.hpp"

int main()
{
//basic, invalid creations
	try {
	Bureaucrat Invalid("Invalid", 155);
	}
	catch(Bureaucrat::GradeTooLowException &err) {
		std::cerr << err.what() << std::endl;	
	}
/*	catch (Bureaucrat::GradeTooHighException &err) {
		std::cerr << err.what() << std::endl;	
	}*/

	try {
	Bureaucrat Invalid("Invalid", 0);
	}
	catch (Bureaucrat::GradeTooHighException &err) {
		std::cerr << err.what() << std::endl;	
	}
	catch (Bureaucrat::GradeTooLowException &err) {
		std::cerr << err.what() << std::endl;	
	}

	Bureaucrat Bob("Bob", 1);	


	
	std::cout << "incrementation/decrementation, setters, <<overload" << std::endl;
	std::cout << "Bob = " << Bob << std::endl;
	Bob.decGrade();
	std::cout << "Bob.decGrade = " << Bob << std::endl;
	Bob.incGrade();
	std::cout << "Bob.incGrade = " << Bob << std::endl;
/*	std::cout << "Bob-- = " << Bob-- << std::endl;
	std::cout << Bob << std::endl;
	std::cout << "--Bob = " << --Bob << std::endl;
	std::cout << Bob << std::endl << std::endl;
	std::cout << "Bob++ = " << Bob++ << std::endl;
	std::cout << Bob << std::endl;
	std::cout << "++Bob = " << ++Bob << std::endl;
	std::cout << Bob << std::endl;*/
	
	std::cout << "LIMITS TESTS" << std::endl << std::endl;

	try {
		Bob.incGrade();
	}
	catch(Bureaucrat::GradeTooHighException &err) {
		std::cerr << err.what() << std::endl;
	}
	std::cout << "Bob.incGrade (= 0 so throw error) = " << Bob << std::endl;

	Bureaucrat Suzy("Suzy", 150);
	try {
	Suzy.decGrade();
	}
	catch(Bureaucrat::GradeTooLowException &err) {
		std::cerr << err.what() << std::endl;
	}
	std::cout << "Suzy.decGrade = " << Suzy << std::endl;

	//verif copie profonde
}
