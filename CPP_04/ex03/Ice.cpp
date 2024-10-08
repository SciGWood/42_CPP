/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:56:04 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 14:37:02 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &other) : AMateria("ice")
{
	*this = other;
}

Ice&	Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

std::string const&	Ice::getType() const
{
	return (this->_type);
}

Ice*	Ice::clone() const
{
	Ice *New = new Ice;
	return (New);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}
