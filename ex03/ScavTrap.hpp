#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		ScavTrap &operator=(ScavTrap const &copy);
		~ScavTrap();

		void	attack(const std::string &target);
		void	guardGate();

		static const unsigned int default_ep;
};

#endif
