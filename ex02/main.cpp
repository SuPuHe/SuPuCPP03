/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:10:38 by omizin            #+#    #+#             */
/*   Updated: 2025/09/19 16:19:49 by omizin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap john("happy John");

	john.getStatus();
	john.attack("Zombie");
	john.getStatus();
	john.takeDamage(5);
	john.getStatus();
	john.beRepaired(5);
	john.getStatus();
	john.guardGate();
}
