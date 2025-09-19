/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:10:41 by omizin            #+#    #+#             */
/*   Updated: 2025/09/19 16:18:22 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
	: _name(copy._name), _hp(copy._hp), _ep(copy._ep), _dmg(copy._dmg)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = copy._name;
	_hp=copy._hp;
	_ep=copy._ep;
	_dmg=copy._dmg;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hp <= 0)
		std::cout << "How can he attack? He is dead" << std::endl;
	else if (_hp > 0 && _ep > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
				<< ", causing " << _dmg << " points of damage!" << std::endl;
		_ep -= 1;
	}
	else
		std::cout << "ClapTrap " << _name << " is too tired to do anything" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "The dead body recieve " << amount << " damage" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << _name << " took " << amount << " damage";
	if (amount >= _hp)
	{
		_hp = 0;
		std::cout << " and died";
	}
	else
		_hp -= amount;
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout << "ClapTrap " << _name << " repaired "
				<< amount << " hp" << std::endl;
		_hp += amount;
		_ep -= 1;
	}
	else if (_ep <= 0 && _hp > 0)
		std::cout << "ClapTrap " << _name << " is too tired to do anything" << std::endl;
	else if (_hp <= 0)
		std::cout << "Nothing can help " << _name << " anymore" << std::endl;
}

void ClapTrap::getStatus()
{
	std::cout << std::endl << "Name:		" << _name << std::endl
			<< "Hit points:	" << _hp << std::endl
			<< "Energy points:	" << _ep << std::endl
			<< "Attack damage:	" << _dmg << std::endl << std::endl;
}
