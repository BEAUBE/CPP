#include "AForm.hpp"

class Intern {
	private:
	public:
		AForm *makeForm(std::string type, std::string target);
		Intern();
		Intern(const Intern &Model);
		Intern &operator=(const Intern &Model);
		~Intern();
		class UnknowTypeException : public std::exception {
			public:
				virtual const char *what() const throw() ;
		};
};
