#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private :
		const std::string Name;
		bool		isSigned;
		const int	signGrade;
		const int 	execGrade;
	public :
		AForm();
		AForm(std::string newName, int newSignGrade, int newExecGrade);
		AForm(const AForm &Model);
		AForm &operator=(const AForm &Model);
		~AForm();

		class GradeTooHighException: public std::exception {
			public :
				virtual const char *what (void) const throw();
		};

		class GradeTooLowException: public std::exception {
			public :
				virtual const char *what (void) const throw();
		};

		class FormNotSigned: public std:: exception {
			public :
				virtual const char *what (void) const throw();
		};

		bool beSigned(Bureaucrat &signatory);
		virtual void execute(Bureaucrat const &executor) const = 0;

		const std::string &GetName() const ;
		const bool &GetIsSigned() const ;
		const int &GetSignGrade() const ;
		const int &GetExecGrade() const ;
};

std::ostream &operator<<(std::ostream &stream, const AForm &ref);
