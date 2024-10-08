/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:49:13 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/28 14:14:57 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string name;
	int			N = 5;

	std::cout << "\nA zombies Horde will be created\n" 
				"Which name do you want?" << std::endl;
	std::cin >> name;

	Zombie	*horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;

	std::cout << GREEN << "\n          This is the END of the program\n" << RESET << std::endl;
	return (0);
}