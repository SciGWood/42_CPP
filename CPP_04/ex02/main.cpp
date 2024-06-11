/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:35 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 14:25:20 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	int	n = 10;

	/* const AAnimal* meta = new AAnimal();
	meta->makeSound();
	delete meta; */
	const AAnimal *(Family[n]);
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
