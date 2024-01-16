#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
		private :
		public :
			FragTrap();
			FragTrap(std::string Name);
			FragTrap(const FragTrap& Model);
			FragTrap &operator=(const FragTrap& Model);
			~FragTrap();
			void highFiveGuys(void);
};
