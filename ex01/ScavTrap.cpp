#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor called" << std::endl;
	_hp = 100;
	_ep = 50;
	_dmg = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = copy._name;
	_hp=copy._hp;
	_ep=copy._ep;
	_dmg=copy._dmg;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hp <= 0)
		std::cout << "How can he attack? He is dead" << std::endl;
	else if (_hp > 0 && _ep > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target
				<< ", causing " << _dmg << " points of damage!" << std::endl;
		_ep -= 1;
	}
	else
		std::cout << "ScavTrap " << _name << " is too tired to do anything" << std::endl;

}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
