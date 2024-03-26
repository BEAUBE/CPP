#pragma once

#include <iostream>

template <class T>
class Array {
	private:
		T	*array;
		unsigned int valSize;
	public:
		Array(): array(new T[0]), valSize(0) {};

		Array(unsigned int n): array(new T[n]), valSize(n) {
			for (unsigned int i = 0; i < n; i++)
				array[i] = T();
		};

		Array(const Array &Model) {
			valSize = Model.size();
			array = new T[Model.size()];
			for (unsigned int i = 0; i < valSize; i++)
				array[i] = Model[i];
		};

		Array &operator=(const Array &Model) {
			if (*this == Model)
				return (*this);
			delete []array;
			array = new T[Model.size()];
			valSize = Model.size();
			for (unsigned int i = 0; i < valSize; i++)
				array[i] = Model[i];
			return (*this);
		};

		T &operator[](unsigned int i) const {
			if (i >= valSize)
				throw OOBException();
			return (array[i]);
		}

		~Array() {
			delete []array;
		};

		unsigned int size() const {
			return (valSize);
		};

		class OOBException : public std::exception{
			virtual const char *what() const throw() {return ("value is out of bounds");}
		};
};
