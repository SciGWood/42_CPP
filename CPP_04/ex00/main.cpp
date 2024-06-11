/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:35 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 14:04:45 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const WrongAnimal* wrong = new WrongAnimal();
	// const WrongAnimal* wrongCat = new WrongCat();
	// const WrongCat* WCat = new WrongCat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	// std::cout << wrong->getType() << " " << std::endl;
	// std::cout << wrongCat->getType() << " " << std::endl;
	// std::cout << WCat->getType() << " " << std::endl;
 	// WCat->makeSound();
	// wrongCat->makeSound(); //will output the WrongAnimal sound!
	// wrong->makeSound();
	i->makeSound(); //will output the Cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	// delete wrong;
	// delete wrongCat;
	// delete WCat;
	return (0);
}
