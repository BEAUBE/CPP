#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie[i].SetName(name);
	return (zombie);
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
		Horde[i].Announce();
	}
		delete []Horde;
    delete TheZombie;
}
