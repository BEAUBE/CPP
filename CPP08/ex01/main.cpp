#include "Span.hpp"

int main() 
{
	{
		try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(7);
		sp.addNumber(11);
		//sp.addNumber(12);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl; 
		}
		catch (std::exception &err)
		{
			std::cout << err.what() << std::endl;
		}
	}
	{
		try {
		Span sp = Span(10);
		int tab[8] = {1, 12, 34, 5, 98, 251, 53, 978};
		std::vector<int> toAdd(tab, tab + 8);

		sp.addNumber(269);
		sp.addNumbers(toAdd.begin(), toAdd.end());
		sp.addNumber(239);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl; 
		}
		catch (std::exception &err)
		{
			std::cout << err.what() << std::endl;
		}
	}
}
