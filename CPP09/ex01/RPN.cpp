#include "RPN.hpp"

RPN::RPN() {
	
}

RPN::RPN	(const RPN &Model) {
	this = Model;
}

RPN &RPN::operator=(const RPN &Model) {
	if (this == &Model)
		return (*this);
	this.numbers = RPN.numbers;
	return (*this);
}

~RPN::RPN() {
	
}

exec(std::string str) {
	
}
