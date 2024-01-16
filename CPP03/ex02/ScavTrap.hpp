#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
		private :
			int gateInfo;
		public :
			void guardGate();
			ScavTrap();
			ScavTrap(const ScavTrap& Model);
			ScavTrap &operator=(const ScavTrap& Model);
			ScavTrap(std::string Name);
			~ScavTrap();
};
