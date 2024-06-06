/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:35 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/06 12:05:55 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	int	n = 10;

	Animal *Family = new Animal[n];
	for (int i = 0; i < n / 2; i++)
		Family[i] = new Dog();
	for (int j = n / 2; j < n; j++)
		Family[i] = new Cat();
	// const WrongAnimal* i = new WrongCat();
	/* std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i; */
	delete []Family;
	return (0);
}
