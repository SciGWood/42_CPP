/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:39:41 by gwen              #+#    #+#             */
/*   Updated: 2024/06/04 17:48:29 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name) : HitPoints(10), Energy(10), AttackDamage(0)
{
	this->name = name;
	std::cout << YELLOW << "Default constructor has been called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
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

std::string	ClapTrap::getName()
{
	return (this->name);
}

void	ClapTrap::setStrenght(unsigned int strenght)
{
	this->AttackDamage = strenght;
}

unsigned int	ClapTrap::getStrenght()
{
	return (this->AttackDamage);
}

void	ClapTrap::display_state()
{
	std::cout << GREEN << "ClapTrap " << this->name
				<< ": HitPoints = " << this->HitPoints
				<< ", Energy = " << this->Energy << "\n"
				<< RESET << std::endl;
}

bool	ClapTrap::check_if_dead(int amount)
{
	int life = this->HitPoints;
	life -= amount;
	if ((life <= 0 || this->Energy <= 0) && amount == 0)
	{
		std::cout << RED << "ClapTrap " << this->name << " is ALREADY dead\n" << RESET << std::endl;
		return (true);
	}
	else if (life <= 0 || this->Energy <= 0)
	{
		this->HitPoints -= amount;
		std::cout << RED << "ClapTrap " << this->name << " is dead\n" << RESET << std::endl;
		return (true);
	}
	return (false);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!check_if_dead(0) && this->Energy > 0)
	{
		this->Energy--;
		std::cout << "ClapTrap " << this->name << RED << " attacks " << RESET << target
					<< std::endl;
		display_state();
		check_if_dead(0);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!check_if_dead(0))
	{
		std::cout << "ClapTrap " << this->name << " takes " << RED << amount
				<< " points of damage !" << RESET << std::endl;
	}
	if (!check_if_dead(amount))
	{
		this->HitPoints -= amount;
		display_state();
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!check_if_dead(0))
	{
		this->Energy--;
		this->HitPoints += amount;
		std::cout << BLUE << "ClapTrap " << this->name << " is being repaired and recover "
					<< amount << " HitPoints!" << RESET << std::endl;
		display_state();
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << YELLOW << "Destructor has been called" << RESET << std::endl;
}
