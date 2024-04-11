#pragma once
#include <iostream>

class RPN {
	private:
		std::stack<int> numbers;
	public:
		exec(std::string str);
		RPN();
		RPN(const RPN &Model);
		RPN &operator=(const RPN &Model);
		~RPN();
};
