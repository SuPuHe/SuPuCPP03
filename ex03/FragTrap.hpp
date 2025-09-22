#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		FragTrap &operator=(FragTrap const &copy);
		~FragTrap();

		void highFivesGuys(void);

		static const unsigned int default_hp;
		static const unsigned int default_dmg;
};
#endif
