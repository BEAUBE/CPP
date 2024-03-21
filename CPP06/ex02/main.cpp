#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
	std::srand(std::time(0));
	int val;
	
	val = std::rand() % 3;
	std::cout << val << std::endl;
	switch (val) {
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			return (NULL);
	}
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "this is a A class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "this is a B class" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "this is a C class" << std::endl;
}

void identify(Base &p) {
	try {
		Base test = dynamic_cast<A&>(p);
		std::cout << "this is a A class" << std::endl;
	}
	catch (std::exception &err) {}
	try {
		Base test = dynamic_cast<B&>(p);
		std::cout << "this is a B class" << std::endl;
	}
	catch (std::exception &err) {}
	try {
		Base test = dynamic_cast<C&>(p);
		std::cout << "this is a C class" << std::endl;
	}
	catch (std::exception &err) {}
	(void)p;
}

int main()
{
	Base *test = generate();

	identify(test);
	identify(*test);
	delete test;
}
