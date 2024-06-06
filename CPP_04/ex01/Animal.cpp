/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:53:59 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/05 15:43:24 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << YELLOW << "Animal default constructor called" << RESET << std::endl;
	this->type = "Undefined";
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal&	Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << RED << "** sound of the animal type **" << RESET << std::endl;
}

Animal::~Animal()
{
	std::cout << YELLOW << "Animal destructor called" << RESET << std::endl;
}
