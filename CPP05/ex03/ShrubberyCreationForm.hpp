#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class AForm;

class ShrubberyCreationForm : public AForm {
	protected :
		const std::string target;
	public :
		ShrubberyCreationForm(std::string newTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm &Model);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &Model);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;
		const std::string &GetTarget() const ;
};
