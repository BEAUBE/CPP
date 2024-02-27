#pragma once
#include <iostream>
#include "AForm.hpp"

class Bureaucrat {
	protected:
		const std::string Name;
		int Grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string newName, int newGrade);
		Bureaucrat(const Bureaucrat &Model);
		Bureaucrat &operator=(const Bureaucrat &Model);
		Bureaucrat &operator++(void);
		Bureaucrat operator++(int);
		Bureaucrat &operator--(void);
		Bureaucrat operator--(int);
		~Bureaucrat();

		void signAForm(AForm &refAForm);

		void incGrade();
		void decGrade();

		class GradeTooLowException : public std::exception {
			public :
				virtual const char *what(void) const throw();
		};

		class GradeTooHighException : public std::exception {
			public :
				virtual const char *what(void) const throw();
		};

		const std::string &GetName() const;
		int GetGrade() const;
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &ref);
