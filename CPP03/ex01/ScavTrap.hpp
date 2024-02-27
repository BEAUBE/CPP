#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
		private :
			int gateInfo;
		public :
			void guardGate();
			void	attack(const std::string& target);
			ScavTrap();
			ScavTrap(const ScavTrap& Model);
			ScavTrap &operator=(const ScavTrap& Model);
			ScavTrap(std::string Name);
			~ScavTrap();
};
