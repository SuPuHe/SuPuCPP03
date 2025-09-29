/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:33:20 by omizin            #+#    #+#             */
/*   Updated: 2025/09/29 11:33:21 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
