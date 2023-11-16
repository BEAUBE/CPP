#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
	std::cout << "Can I get some burger with some peanut butter ? Do you think it's better with a Dr. Pepper ?" << std::endl;
}

void Harl::info() {
	std::cout << "Can I get some turkey ? I need more proteins. Can I get some whisky I could drink a fountain" << std::endl;
}

void Harl::warning() {
	std::cout << "I don't want a candy, I want beef, chips, ribs and burger Vegan people hate me, Because I love cheesecakes and burgers" << std::endl;
}

void Harl::error() {
	std::cout << "I'm American so you can blame me But I will not eat in your gourmet restaurant" << std::endl;
}

void Harl::complain(std::string level) {
	if (level == "debug")
		this->debug();
	else if (level == "info")
		this->info();
	else if (level == "warning")
		this->warning();
	else if (level == "error")
		this->error();
	else
		std::cout << "hey you little cunt, learn how to fucking write something that works, dont put garbage in my code" << std::endl;
}
