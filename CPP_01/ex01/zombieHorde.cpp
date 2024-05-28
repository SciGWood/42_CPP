/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:51:03 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/28 11:26:58 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* it allocates N zombies in a single allocation */
Zombie*	zombieHorde(int N, std::string name)
{
    Zombie *Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
		Horde[i].setName(name);
	return (Horde);
}