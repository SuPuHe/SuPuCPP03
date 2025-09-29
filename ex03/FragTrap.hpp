/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:33:15 by omizin            #+#    #+#             */
/*   Updated: 2025/09/29 11:33:16 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
