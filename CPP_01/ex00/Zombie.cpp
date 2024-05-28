/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:13:11 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/27 16:39:49 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << BLUE << this->_name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << RED << " has been destroyed" << RESET << std::endl;
}
