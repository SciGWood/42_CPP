/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:56:19 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/07 14:14:14 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure(std::string const &type)
{
	this->type = "cure";
}

Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure&	Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string const&	Cure::getType() const
{
	return (this->type);
}

Cure*	Cure::clone() const
{
	Cure *New = new Cure;
	return (New);	
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}
