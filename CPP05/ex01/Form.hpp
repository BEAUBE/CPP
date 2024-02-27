#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private :
		const std::string Name;
		bool		isSigned;
		const int	signGrade;
		const int 	execGrade;
	public :
		Form();
		Form(std::string newName, int newSignGrade, int newExecGrade);
		Form(const Form &Model);
		Form &operator=(const Form &Model);
		~Form();

		class GradeTooHighException: public std::exception {
			public :
				virtual const char *what (void) const throw();
		};

		class GradeTooLowException: public std::exception {
			public :
				virtual const char *what (void) const throw();
		};

		bool beSigned(Bureaucrat &signatory);

		const std::string &GetName() const ;
		const bool &GetIsSigned() const ;
		const int &GetSignGrade() const ;
		const int &GetExecGrade() const ;
};

std::ostream &operator<<(std::ostream &stream, const Form &ref);
