/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:13:01 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/27 17:24:29 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie	Zombie;

	Zombie._name = name;
	std::cout << BLUE << name << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}