/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:10:37 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/27 17:26:53 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::string	name;

	std::cout << "\nZombie will be created on the stack and destroyed in the end\n" 
				"You can give a name to the Zombie:" << std::endl;
	std::cin >> name;

	Zombie		Zombie_on_the_stack(name);
	Zombie_on_the_stack.announce();

	std::cout << YELLOW << "\n------------------------------------\n" << RESET

				<< "\nZombie will be created on the heap and deleted right after\n" 
				<< "You can give a name to the Zombie:" << std::endl;
	std::cin >> name;

	Zombie 		*Zombie_on_the_heap = newZombie(name);
	Zombie_on_the_heap->announce();
	delete Zombie_on_the_heap;

	std::cout << YELLOW << "\n------------------------------------\n" << RESET

		<< "\nRandomChump is created on the stack and destroyed right after" << std::endl;
	randomChump("I am Random");

	std::cout << GREEN << "\n          This is the END of the program\n" << RESET << std::endl;
	return (0);
}
