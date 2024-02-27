#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *Brain;
	public:
		Dog();
		Dog(const Dog &Model);
		Dog &operator=(const Dog& Model);
		void makeSound() const;
		const std::string &getType() const;
		const std::string &GetBrainIdea(int i) const;
		void SetBrainIdea(int i, std::string str) const;
		~Dog();
};
