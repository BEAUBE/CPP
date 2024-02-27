#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:
	public:
	WrongCat();
	WrongCat(const WrongCat &Model);
	WrongCat &operator=(const WrongCat& Model);
	void makeSound() const;
	const std::string &getType() const;
	~WrongCat();
};
