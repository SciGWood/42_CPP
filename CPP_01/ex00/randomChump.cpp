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

/*It creates a zombie, name it, and the zombie announces itself.*/
void	randomChump(std::string name)
{
	Zombie	Zombie(name);

	Zombie.announce();
}