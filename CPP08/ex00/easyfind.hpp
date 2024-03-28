#pragma once
#include <iostream>
#include <algorithm>

template <class T>
void easyfind(T &container, int i) {
	typename T::iterator it = std::find(container.begin(), container.end(), i);	

};
