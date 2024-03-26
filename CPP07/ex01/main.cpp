#include <iostream>
#include "iter.hpp"

int main() {
	{
	int tab[5] = {42, 39, 44, 1, 12};
	::iter(tab, 5, dispElement);
	}
	{
	std::string tab[6] = {"test", "ligne 2", "3","encore une", "presque la fin", "la fin"};
	::iter(tab, 6, dispElement);
	}
	{
	char tab[4] = {'t', 'e', 's', 't'};
	::iter(tab, 4, dispElement);
	}
}
