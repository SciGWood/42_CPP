/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:55:29 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/06 16:28:21 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria&	AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (this->type);
}

/* AMateria*	AMateria::clone() const
{
	
} */

void	AMateria::use(ICharacter& target)
{
	
}

AMateria::~AMateria()
{
}
