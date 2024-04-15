#pragma once
#include <stack>
#include <iostream>

class RPN {
	private:
		std::stack<int> numbers;
	public:
		RPN();
		std::stack<int> getNumbers() const ;
		RPN(const RPN &Model);
		RPN &operator=(const RPN &Model);
		~RPN();
		bool exec(std::string str);
		//bool checkarg(std::string str);
		bool calculation(std::string str);
};
