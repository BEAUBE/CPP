#include "Serializer.hpp"

int main () {
	Data *test = new Data;
	uintptr_t tmp;
	
	test->c = 'a';
	test->i = 1;

	std::cout << "Data = " << test << std::endl;
	tmp = Serializer::serialize(test);
	std::cout << "Serialized = " << tmp << std::endl;
//	Data *recup = Serializer::deserialize(tmp);
//	std::cout << "deserialized = " << recup << std::endl;
	std::cout << "deserialized = " << Serializer::deserialize(tmp) << std::endl;
	delete test;
}

