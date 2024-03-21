#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm;

class PresidentialPardonForm : public AForm {
	protected :
		const std::string target;
	public :
		PresidentialPardonForm(std::string newTarget);
		PresidentialPardonForm(const PresidentialPardonForm &Model);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &Model);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;
		const std::string &GetTarget() const ;
};
