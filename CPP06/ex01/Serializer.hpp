#include <iostream>
#include <stdint.h>

struct Data {
	int i;
	char c;
};


class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &Model);
	public:
		~Serializer();
		Serializer &operator=(const Serializer &Model);
		static uintptr_t	serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};
