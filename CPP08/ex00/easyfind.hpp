#pragma once
#include <iostream>
#include <algorithm>

template <class T>
bool easyfind(T &container, int i) {
	typename T::iterator it = std::find(container.begin(), container.end(), i);	
	if (it == container.end())
	{
			std::cout << "occurence not found" << std::endl;
			return (1);
	}
	else
	{
			std::cout << "first occurence found at index " << std::distance(container.begin(), it) << std::endl;
			return (0);
	}

};
