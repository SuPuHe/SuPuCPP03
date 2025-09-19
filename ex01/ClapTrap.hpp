/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:10:40 by omizin            #+#    #+#             */
/*   Updated: 2025/09/19 14:43:01 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_dmg;
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		ClapTrap &operator=(ClapTrap const &copy);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	getStatus();
};

#endif
