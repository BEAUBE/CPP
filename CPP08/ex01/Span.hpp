#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	private:
		unsigned int N;
		std::vector<int> IntVector;
	public:
		Span(unsigned int newN);
		Span(const Span &Model);
		Span &operator=(const Span &Model);
		~Span();

		class TooMuchElements: public std::exception {
			const char *what() const throw();
		};

		class NotEnoughElements: public std::exception {
			const char *what() const throw() ;
		};

		void addNumber(int newInt) ;
		void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);

		unsigned int shortestSpan();
		unsigned int longestSpan();
};
