/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:56:04 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/07 14:14:46 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(std::string const &type)
{
	this->type = "ice";
}

Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice&	Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string const&	Ice::getType() const
{
	return (this->type);
}

Ice*	Ice::clone() const
{
	Ice *New = new Ice;
	return (New);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}

Ice::~Ice()
{
}
