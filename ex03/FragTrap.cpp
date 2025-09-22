#include "FragTrap.hpp"

const unsigned int FragTrap::default_hp = 100;
const unsigned int FragTrap::default_dmg = 30;

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	_hp = 100;
	_ep = 100;
	_dmg = 30;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	_name = copy._name;
	_hp=copy._hp;
	_ep=copy._ep;
	_dmg=copy._dmg;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " wants to give you a high five" << std::endl;
}
