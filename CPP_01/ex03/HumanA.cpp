/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:03:45 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/28 15:00:40 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _name(name), _type(type)
{
}

void	HumanA::attack()
{
	if (_type.getType() != "")
		std::cout << this->_name << " attacks with their " << _type.getType() << std::endl;
	else
		std::cout << this->_name << " \"No weapon, No attack\"" << std::endl;
}

HumanA::~HumanA()
{
}
