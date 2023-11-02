#pragma once
#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

class Zombie {
private:
    std::string name;

public:
    Zombie();

    Zombie(std::string ZombieName);

    void Announce();

    void SetName(std::string name);

    ~Zombie();
};
