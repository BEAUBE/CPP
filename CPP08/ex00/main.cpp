#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
		{
			std::vector<int> IntVector;

			IntVector.push_back(0);
			IntVector.push_back(1);
			IntVector.push_back(1234);
			IntVector.push_back(-11234);
			IntVector.push_back(6987);
			IntVector.push_back(2);

			easyfind(IntVector, 6987);
			easyfind(IntVector, 69);
			easyfind(IntVector, 0);
		}
		{
			std::list<char> charList;

			charList.push_back('c');
			charList.push_back('h');
			charList.push_back('a');
			charList.push_back('r');
			charList.push_back('s');

			easyfind(charList, 97); //a
			easyfind(charList, 12);
		}
}
