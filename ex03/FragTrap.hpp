#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		FragTrap &operator=(FragTrap const &copy);
		~FragTrap();

		void highFivesGuys(void);
};
#endif
