#include "Serializer.hpp"

int main () {
	Data *test = new Data;
	uintptr_t tmp;

	test->c = 'a';
	test->i = 1;

	std::cout << "Data = " << test << std::endl;
	std::cout << "c = " << test->c << ", i = " << test->i << std::endl;
	tmp = Serializer::serialize(test);
	std::cout << "Serialized = " << tmp << std::endl;
	Data *recup = Serializer::deserialize(tmp);
	std::cout << "deserialized = " << recup << std::endl;
	std::cout << "c = " << recup->c << ", i = " << recup->i << std::endl;
	delete test;
}

