/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:56:19 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 12:32:04 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria("cure")
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
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}
