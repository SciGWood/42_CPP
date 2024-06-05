/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:36:28 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/05 11:54:16 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << YELLOW << "FragTrap constructor called" << RESET << std::endl;
	this->name = name;
	this->HitPoints = 100;
	this->Energy = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
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

void	FragTrap::attack(const std::string& target)
{
	if (!check_if_dead(0) && this->Energy > 0)
	{
		this->Energy--;
		std::cout << "FragTrap " << this->name << RED << " attacks " << RESET << target
					<< std::endl;
		display_state();
		check_if_dead(0);
	}
}

void	FragTrap::display_state()
{
	std::cout << GREEN << "FragTrap " << this->name
				<< ": HitPoints = " << this->HitPoints
				<< ", Energy = " << this->Energy << "\n"
				<< RESET << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " says: "
                << YELLOW << "\"HIGH FIVES GUYS :) !!!\"\n"
                << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << YELLOW << "FragTrap Destructor called" << RESET << std::endl;
}
