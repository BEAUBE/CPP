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

    void Announce();

    ~Zombie();
};
