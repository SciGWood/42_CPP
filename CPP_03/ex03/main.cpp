/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:39:13 by gwen              #+#    #+#             */
/*   Updated: 2024/06/04 16:05:17 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	Zombie("Zombie");
	ClapTrap	Ghost("Ghost");
	ScavTrap	Goliath("Goliath");
	FragTrap	Frog("Frog");

	Zombie.setStrenght(4);
	Ghost.setStrenght(6);
	std::cout << BLUE << "ClapTrap Zombie strenght = " << Zombie.getStrenght() << RESET << std::endl;
	Zombie.display_state();
	std::cout << BLUE <<"ClapTrap Ghost strenght = " << Ghost.getStrenght() << RESET <<std::endl;
	Ghost.display_state();
	std::cout << BLUE << "ScavTrap Goliath strenght = " << Goliath.getStrenght() << RESET << std::endl;
	Goliath.display_state();
	std::cout << BLUE << "FragTrap Frog strenght = " << Frog.getStrenght() << RESET << std::endl;
	Frog.display_state();

	Zombie.attack(Ghost.getName());
	Ghost.takeDamage(Zombie.getStrenght());
	Zombie.attack(Ghost.getName());
	Ghost.takeDamage(Zombie.getStrenght());
	Ghost.attack(Zombie.getName());
	Zombie.takeDamage(Ghost.getStrenght());
	Ghost.attack(Goliath.getName());
	Goliath.takeDamage(Ghost.getStrenght());
	Zombie.attack(Goliath.getName());
	Goliath.takeDamage(Zombie.getStrenght());
	Frog.highFivesGuys();
	Frog.attack(Goliath.getName());
	Goliath.takeDamage(Frog.getStrenght());
	Goliath.guardGate();
	Zombie.attack(Ghost.getName());
	Ghost.takeDamage(Zombie.getStrenght());
	Zombie.beRepaired(2);
	Goliath.attack(Zombie.getName());
	Zombie.takeDamage(Goliath.getStrenght());
	Ghost.beRepaired(2);
    return (0);
}