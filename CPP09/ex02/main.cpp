#include "PmergeMe.hpp"

int main(int ac, char **av) {
	if (ac < 3) {
		std::cerr << "program needs at least 2 args" << std::endl;
		return (0); }
	try {
		float vectorTime, dequeTime;
		clock_t mainStart, vectorEnd, dequeEnd;

		PmergeMe test(ac, av);
		
		test.printBefore();
		mainStart = clock();

		test.vector = test.vectorAlgo(test.vector);
		vectorEnd = clock();
		test.deque = test.dequeAlgo(test.deque);
		dequeEnd = clock();

		test.printAfter();

		vectorTime = (vectorEnd - mainStart) * 1000000.0 / (float)CLOCKS_PER_SEC;
		dequeTime = (dequeEnd - vectorEnd) * 1000000.0 / (float)CLOCKS_PER_SEC;
		std::cout << "Time to process a range of " << test.vector.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << vectorTime << " us" << std::endl;
		std::cout << "Time to process a range of " << test.deque.size () << " elements with std::deque : " << std::fixed << std::setprecision(5) << dequeTime << " us" << std::endl;
	}
	catch (std::exception &err) {
		std::cerr << err.what() << std::endl;
	}
}
