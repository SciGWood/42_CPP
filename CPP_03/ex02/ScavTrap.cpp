/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:14:53 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/04 17:08:49 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << YELLOW << "ScavTrap default constructor called" << RESET << std::endl;
	this->name = name;
	this->HitPoints = 100;
	this->Energy = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->HitPoints = other.HitPoints;
		this->Energy = other.Energy;
		this->AttackDamage = other.AttackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!check_if_dead(0) && this->Energy > 0)
	{
		this->Energy--;
		std::cout << "ScavTrap " << this->name << RED << " attacks " << RESET << target
					<< std::endl;
		display_state();
		check_if_dead(0);
	}
}

void	ScavTrap::display_state()
{
	std::cout << GREEN << "ScavTrap " << this->name
				<< ": HitPoints = " << this->HitPoints
				<< ", Energy = " << this->Energy << "\n"
				<< RESET << std::endl;
}

void	ScavTrap::guardGate()
{
    std::cout << BLUE << "ScavTrap " << this->name  << " is now in Gate keeper mode\n"
				<< RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScavTrap Destructor called" << RESET << std::endl;
}
