#pragma once
#include <iostream>

class PmergeMe {
	private:
	
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &Model);
		PmergeMe operator=(const PmergeMe &Model);
		~PmergeMe();
};
