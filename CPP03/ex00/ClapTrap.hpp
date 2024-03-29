#include <iostream>

class ClapTrap {
	private:
			std::string Name;
			int HitPoints;
			int EnergyPoints;
			int AttackDamage;
	public:
			ClapTrap();
			ClapTrap(std::string newName);
			ClapTrap(const ClapTrap& Model);
			ClapTrap &operator=(const ClapTrap& Model);
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			~ClapTrap();
};
