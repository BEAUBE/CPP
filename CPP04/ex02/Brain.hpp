#pragma once
#include <iostream>

class Brain {
	private:
		std::string Ideas[100];
	public:
		Brain();
		Brain(const Brain &Model);
		Brain &operator=(const Brain &Model);
		~Brain();
		void	SetIdea(const int n, std::string str);
		std::string &GetIdea(const int n);
		std::string *GetIdeas();
};
