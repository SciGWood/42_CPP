/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:11:10 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/27 17:22:13 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* It creates a zombie on the heap, name it, and return it so you can use it outside
	of the function scope
	It musts be deleted before the end of the program.*/
Zombie*	newZombie(std::string name)
{
	return (new Zombie(name));
}
