#pragma once
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <unistd.h>
#include <cstdlib>
#include <ctime>

class Bureaucrat;
class AForm;

class RobotomyRequestForm : public AForm {
	protected :
		const std::string target;
	public :
		RobotomyRequestForm(std::string newTarget);
		RobotomyRequestForm(const RobotomyRequestForm &Model);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &Model);
		~RobotomyRequestForm();

		void execute(Bureaucrat const &executor) const;
		const std::string &GetTarget() const ;
};
