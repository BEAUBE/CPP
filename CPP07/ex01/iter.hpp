#pragma once

template <class T>
void iter(T *array, int len, void (*f)(T &)) {
	for (int i = 0; i < len; i++)
	{
		f(array[i]);
	}
}

template <class T>
void dispElement(T elem) {
	std::cout << elem << std::endl;
}
