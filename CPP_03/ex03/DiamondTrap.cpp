/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:45:18 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/05 13:57:36 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    this->HitPoints = FragTrap::HitPoints;
	this->Energy = ScavTrap::Energy;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +"_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << YELLOW << "DiamondTrap constructor called" << RESET << std::endl;
	this->name = name;
	FragTrap::HitPoints = 100;
	ScavTrap::Energy = 50;
	FragTrap::AttackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
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

void	DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void	DiamondTrap::display_state()
{
    std::cout << GREEN << "DiamondTrap " << this->name
				<< ": HitPoints = " << DiamondTrap::HitPoints
				<< ", Energy = " << DiamondTrap::Energy << "\n"
				<< RESET << std::endl;
}

void	DiamondTrap::whoAmI()
{
    std::cout << RED << "DiamondTrap Mice asks : \"WHO AM I??\"\nI am...\n" << BLUE << "ClapTrap " << ClapTrap::name
                << RESET << "\n AND\n" << GREEN << "DiamondTrap " << this->name << "\n"
                << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
}
