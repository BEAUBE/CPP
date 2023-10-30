#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();}

Zombie* NewZombie(std::string name) {
    Zombie* BabyZombie = new Zombie(name);
    return BabyZombie;}

int main() {
    Zombie* TheZombie = NewZombie("Bob");
    TheZombie->announce();
    randomChump("Alice");
    delete TheZombie;}
