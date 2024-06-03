/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwen <gwen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:39:13 by gwen              #+#    #+#             */
/*   Updated: 2024/06/03 17:34:47 by gwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Zombie("Zombie");
	ClapTrap	Ghost("Ghost");

	Zombie.setStrenght(3);
	Ghost.setStrenght(4);
	std::cout << BLUE << "ClapTrap Zombie strenght = " << Zombie.getStrenght() << RESET << std::endl;
	Zombie.display_state();
	std::cout << BLUE <<"ClapTrap Ghost strenght = " << Ghost.getStrenght() << RESET <<std::endl;
	Ghost.display_state();

	Zombie.attack(Ghost.getName());
	Ghost.takeDamage(Zombie.getStrenght());
	Zombie.attack(Ghost.getName());
	Ghost.takeDamage(Zombie.getStrenght());
	Ghost.attack(Ghost.getName());
	Zombie.takeDamage(Ghost.getStrenght());
	Zombie.attack(Ghost.getName());
	Ghost.takeDamage(Zombie.getStrenght());
	Zombie.attack(Ghost.getName());
	Ghost.takeDamage(Zombie.getStrenght());
	Zombie.beRepaired(2);
	Ghost.beRepaired(2);
    return (0);
}