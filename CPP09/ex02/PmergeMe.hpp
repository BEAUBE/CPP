#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cstdlib>
#include <utility>
#include <ctime>
#include <iomanip>

class PmergeMe {
	private:
	public:
		std::vector<int> vector;
		std::deque<int> deque;

		std::vector<int> vectorAlgo(std::vector<int> arg);
		std::deque<int> dequeAlgo(std::deque<int> arg);
		void printBefore();
		void printAfter();
		
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &Model);
		PmergeMe &operator=(const PmergeMe &Model);
		~PmergeMe();

		class Error: public std::exception {
			virtual const char *what() const throw();
		};

};
