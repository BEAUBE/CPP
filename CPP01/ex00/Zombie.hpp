#pragma once
#include <iostream>
#include <iomanip>
#include "Zombie.hpp"
using namespace std;

class Zombie {
private:
    std::string name;

public:
    Zombie();

    Zombie(std::string ZombieName);

    void announce(){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}

    ~Zombie();
};
/*
Zombie* NewZombie(std::string name) {
    Zombie* BabyZombie = new Zombie(name);
    return BabyZombie;
}
*/
