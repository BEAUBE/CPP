#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) : AForm(newTarget, 145, 137), target(newTarget) {
		std::cout << "Shrubberycreationform constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Model) {
	*this = Model;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Model) {
	if (this == &Model)
		return (*this);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!GetIsSigned())
		throw AForm::FormNotSigned();
	else if (GetSignGrade() < executor.GetGrade())
		throw AForm::GradeTooLowException();
	else 
	{
		std::ofstream	outfile;
		std::string		tmpstr;

		tmpstr = this->GetTarget().c_str();
		outfile.open(tmpstr.append("_shrubbery").c_str());
		if (!outfile.is_open()) 
		{
			std::cerr << "Couldn't open the file you asked for" << std::endl;
			return ;
		}
		outfile << "     +" << std::endl;
		outfile << "    / \\ " << std::endl;
		outfile << "   / _ \\ " << std::endl;
		outfile << "  | / \\ | " << std::endl;
		outfile << " | /   \\ | " << std::endl;
		outfile << "|/_______\\| " << std::endl;
		outfile << "     || " << std::endl;
		outfile << "     || " << std::endl;
		outfile << std::endl;
		outfile << std::endl;
		outfile << "     +" << std::endl;
		outfile << "    / \\ " << std::endl;
		outfile << "   / _ \\ " << std::endl;
		outfile << "  | / \\ | " << std::endl;
		outfile << " | /   \\ | " << std::endl;
		outfile << "|/_______\\| " << std::endl;
		outfile << "     || " << std::endl;
		outfile << "     || " << std::endl;
		outfile << std::endl;
	}
}

const std::string &ShrubberyCreationForm::GetTarget() const {
	return (this->target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
