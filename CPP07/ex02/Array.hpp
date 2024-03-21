#pragma once

#include <iostream>

template <class T>
class Array {
	private:
		T	*array;
		unsigned int size;
	public:
		Array(): array(new T[0]), size(0) {};

		Array(unsigned int n): array(new T[n]), size(n) {
		for (int i = 0; i < n; i++)
			array[i] = T();
		};

		Array(const Array &Model);
		Array &operator=(const Array &Model);

		unsigned int size() {
			return (size);
		};
};
