#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *Brain;
	public:
		Cat();
		Cat(const Cat &Model);
		Cat &operator=(const Cat& Model);
		void makeSound() const;
		const std::string &getType() const;
		const std::string &GetBrainIdea(int i) const;
		void SetBrainIdea(int i, std::string str) const;
		~Cat();
};
