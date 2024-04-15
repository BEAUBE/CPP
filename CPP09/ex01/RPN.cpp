#include "RPN.hpp"

RPN::RPN() {
	
}

RPN::RPN(const RPN &Model) {
	*this = Model;
}

RPN &RPN::operator=(const RPN &Model) {
	if (this == &Model)
		return (*this);
	this->numbers = Model.getNumbers();
	return (*this);
}

RPN::~RPN() {
	
}

std::stack<int> RPN::getNumbers() const {
	return (numbers);}

bool checkarg(std::string str) {
	if (str.size() < 5 )
		return (0);
	if (str.find_first_not_of("1234567890*-+/ ") != std::string::npos) {
		return (0);
	}
	for (unsigned long i = 0; i < (str.size() - 1); i++) {
		if (!(i % 2)) {
			if (str[i] == ' ')
				return	(0);
		}
		else {
			if (str[i] != ' ')
				return (0);
		}
	}
	return (1);
}

bool	RPN::exec(std::string str) {
	if (!checkarg(str))
		return (0);

	int tmp;
	for (unsigned long i = 0; i < str.size(); i += 2) {
		if (std::isdigit(str[i]))
			numbers.push((str[i] - '0'));
		else {
			if (numbers.size() < 2)
				return (0);
			else {
				tmp = numbers.top();	
				numbers.pop();	
				if (str[i] == '+')
					tmp += numbers.top();
				if (str[i] == '*')
					tmp *= numbers.top();
				if (str[i] == '-')
					tmp = numbers.top() - tmp;
				if (str[i] == '/') {
						if (tmp == 0)
							return (0);
					tmp = numbers.top() / tmp;
				}
				numbers.pop();	
				numbers.push(tmp);
			}
		}
	}
	if (numbers.size() != 1)
		return (0);
	std::cout << numbers.top() << std::endl;
	return (1);
}
