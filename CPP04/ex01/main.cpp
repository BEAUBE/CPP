#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
	const Cat* i = new Cat();

	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!

	for (int k = 0; k < 100; k++)
		i->SetBrainIdea(k, "Eat or sleep");

	i->SetBrainIdea(42, "What if... Well, I already forgor");

	const Cat* j = new Cat(*i);

	std::cout << j->GetBrainIdea(0) << std::endl;
	std::cout << j->GetBrainIdea(41) << std::endl;
	std::cout << j->GetBrainIdea(42) << std::endl;
	std::cout << j->GetBrainIdea(99) << std::endl;
	

	delete j;
	delete i;
	}
	{
	const Dog* i = new Dog();

	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!

	for (int k = 0; k < 100; k++)
		i->SetBrainIdea(k, "Sleep or eat");

	i->SetBrainIdea(42, "What if... Well, I already forgor");

	const Dog* j = new Dog(*i);

	std::cout << j->GetBrainIdea(0) << std::endl;
	std::cout << j->GetBrainIdea(41) << std::endl;
	std::cout << j->GetBrainIdea(42) << std::endl;
	std::cout << j->GetBrainIdea(99) << std::endl;
	

	delete j;
	delete i;
	}
}
