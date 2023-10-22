#include <iostream>
#include "Zombie.hpp"
/*
Zombie* zombieHorde(int N, std::string name)
{
	Zombie[N - 1]	BabyZombies;
	while (N)
	{
    Zombie BabyZombie = new Zombie(name);
	N--;
	}
}
*/
void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}

Zombie* NewZombie(std::string name) {
    Zombie* BabyZombie = new Zombie(name);
    return BabyZombie;}

int main() {
    Zombie* TheZombie = NewZombie("Bob");
    TheZombie->announce();
    randomChump("Alice");
    delete TheZombie;
}
