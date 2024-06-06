/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:53:59 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/06 15:38:31 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << YELLOW << "AAnimal default constructor called" << RESET << std::endl;
	this->type = "Undefined";
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
}

AAnimal&	AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->type);
}

void	AAnimal::makeSound() const
{
	std::cout << RED << "** sound of the animal type **" << RESET << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << YELLOW << "Animal destructor called" << RESET << std::endl;
}
