#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &copy);
		DiamondTrap &operator=(DiamondTrap const &copy);
		~DiamondTrap();

		void	attack(const std::string &target);
		void	whoAmI();
};

#endif
