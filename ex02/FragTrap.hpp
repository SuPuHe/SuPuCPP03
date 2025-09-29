/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:33:03 by omizin            #+#    #+#             */
/*   Updated: 2025/09/29 11:33:04 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
