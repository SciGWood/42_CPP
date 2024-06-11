/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:55:29 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 12:24:45 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

/* AMateria::AMateria(const AMateria &other) : type(other.type)
{
} */

/* AMateria&	AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
} */

std::string const&	AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}

AMateria::~AMateria()
{
}
