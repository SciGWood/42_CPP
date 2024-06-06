/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:30 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/06 15:35:17 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << YELLOW << "WHOUF ** Dog default constructor called ** WHOUF" << RESET << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	Dog::getType() const
{
	return (this->type);
}

void	Dog::makeSound() const
{
	std::cout << GREEN << "** WHOUF **" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << YELLOW << "WHOUF ** Dog destructor called ** WHOUF" << RESET << std::endl;
}
