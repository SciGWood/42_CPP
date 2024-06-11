/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:35 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 14:14:07 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/*		Shallow copy:
		----------------------------------------
		A ---> [heap adress of a member] <--- B
		----------------------------------------
		If the value inside the address is modified at any point, the value will be
		modified both in A and B since they both point to the same location in memory
		This is a bad idea. If any variables were allocated on the heap -> deep copy!

		Deep copy:
		-----------------------------------------------------------------
		A ---> [heap adress of a member] B ---> [heap adress of a member]
		-----------------------------------------------------------------
		Despite having the same values each object has its own allocated memory
		for its member variables */

int	main(void)
{
	int	n = 10;

	const Animal* meta = new Animal();
	meta->makeSound();
	delete meta;
	std::cout << std::endl;
	const Animal *(Family[n]);
	for (int i = 0; i < n / 2; i++)
		Family[i] = new Dog();
	Family[4]->makeSound();
	for (int i = n / 2; i < n; i++)
		Family[i] = new Cat();
	Family[9]->makeSound();
	for (int i = 0; i < n; i++)
		delete Family[i];
	return (0);
}
