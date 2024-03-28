#include "Array.hpp"

int main() {
	try {
	Array<int> testInt(3);

	testInt[0] = 0;
	testInt[1] = 42;
	testInt[2] = 1234;
	std::cout << testInt[0] << std::endl;
	std::cout << testInt[1] << std::endl;
	std::cout << testInt[2] << std::endl;

	Array<int> test2Int = testInt;
	std::cout << test2Int[0] << std::endl;
	std::cout << test2Int[1] << std::endl;
	std::cout << test2Int[2] << std::endl;
	// std::cout << test2Int[3] << std::endl;

	testInt[0] = 1;
	test2Int[0] = 2;
	std::cout << testInt[0] << ", " << test2Int[0] << std::endl;
	}
	catch (std::exception &err)		
	{
		std::cout << err.what() << std::endl;
	}
	try {
		Array<std::string> testStr(4);

		testStr[0] = "ceci ";
		testStr[1] = "est ";
		testStr[2] = "un ";
		testStr[3] = "test ";
		// testStr[1235] = "nontest";	
		std::cout << testStr[0] << testStr[1] << testStr[2] << testStr[3] << std::endl;
	}
	catch (std::exception &err)		
	{
		std::cout << err.what() << std::endl;
	}
}
