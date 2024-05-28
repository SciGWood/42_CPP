/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:49:32 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/28 15:10:23 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << BLUE << this->_name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << RED << " has been destroyed" << RESET << std::endl;
}
