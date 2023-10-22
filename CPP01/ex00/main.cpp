#include <iostream>
#include "Zombie.hpp"

/*class Zombie {
private:
    std::string name;

public:
    Zombie(){name = "Unknown";}

    Zombie(std::string zombieName):name(zombieName){}

    void announce(){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}

    ~Zombie(){std::cout << name << " has been destroyed!" << std::endl;}
};
*/
/*

Zombie* newZombie(std::string name) {
    Zombie* newZombie = new Zombie(name);
    return newZombie;
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
