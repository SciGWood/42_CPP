/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:03:20 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/28 14:49:10 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

/* const because a getter has read-access only */
const std::string&	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}

Weapon::~Weapon()
{
}
