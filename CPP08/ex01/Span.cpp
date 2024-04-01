#include "Span.hpp"

Span::Span(unsigned int newN): N(newN) {
	
}

Span::~Span() {
	
}

Span::Span(const Span &Model) {
	*this = Model;
}

Span &Span::operator=(const Span &Model) {
	if (this == &Model)
		return (*this);
	N = Model.N;
	return (*this);
}

void Span::addNumber(int newInt) {
	if (IntVector.size() + 1 > N)
		throw TooMuchElements();
	IntVector.push_back(newInt);
}

const char *Span::TooMuchElements::what() const throw() {
	return ("current Span cannot save another Int");
}

const char *Span::NotEnoughElements::what() const throw() {
	return ("current Span doesn't have enough elements to make a comparaison");
}

unsigned int Span::shortestSpan() {
	int len = IntVector.size() - 2;

	if (IntVector.size() <= 1)
		throw TooMuchElements();
	std::sort(IntVector.begin(), IntVector.end());

	int tmp = IntVector[1] - IntVector[0];
	for (int i = 1; i < len; i++) {
		if (tmp > (IntVector[i + 1] - IntVector[i]))
			tmp = IntVector[i + 1] - IntVector[i];
	}
	return (tmp);
} 

void Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	if (IntVector.size() + std::distance(start, end) > N)
		throw TooMuchElements();
	IntVector.insert(IntVector.end(), start, end);
}

unsigned int Span::longestSpan() {
	if (IntVector.size() <= 1)
		throw NotEnoughElements();
	std::sort(IntVector.begin(), IntVector.end());

	return (IntVector[IntVector.size() - 1] - IntVector[0]);
}
