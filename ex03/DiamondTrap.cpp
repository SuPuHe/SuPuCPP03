#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hp = FragTrap::default_hp;
	_ep = ScavTrap::default_ep;
	_dmg = FragTrap::default_dmg;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
	: ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	_name = copy._name + "_clap_Trap";
	_hp=copy._hp;
	_ep=copy._ep;
	_dmg=copy._dmg;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << _name << " from " << ClapTrap::_name << std::endl;
}
