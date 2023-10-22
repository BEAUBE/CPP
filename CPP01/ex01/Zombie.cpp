#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(string ZombieName){
		name = ZombieName;}

Zombie::~Zombie(){
	std::cout << name << " has been destroyed!" << std::endl;}
