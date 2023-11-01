#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombie;
	Zombie	*first;

	zombie = new Zombie(name);
	first = zombie;
	zombie++;
	for (int i = 1; i < N; i++)
	{
		zombie = new Zombie(name);
		zombie++;
	}
	return (first);
}

void	randomChump(std::string name) {
    Zombie zombie(name);
    zombie.Announce();
}

Zombie*	NewZombie(std::string name) {
    Zombie* BabyZombie = new Zombie(name);
    return BabyZombie;}

int	main() {
    Zombie *TheZombie = NewZombie("Bob");
    TheZombie->Announce();
    randomChump("Alice");

	Zombie *Horde =	zombieHorde(4, "Pat");
	for (int i = 0; i < 4; i++)
	{
		Horde->Announce();
	}
//	for (int i = 0; i < 4; i++)
//		delete Horde->Announce();
    delete TheZombie;
}
