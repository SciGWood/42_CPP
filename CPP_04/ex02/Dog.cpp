/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:30 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 14:23:12 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << YELLOW << "WHOUF ** Dog default constructor called ** WHOUF" << RESET << std::endl;
	this->type = "Dog";
	this->B = new Brain();
}

Dog::Dog(const Dog &other)
{
	this->B = new Brain(*(other.getBrain()));
	this->type = other.getType();
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this != &other && this->B)
	{
		delete (this->B);
		this->B = new Brain;
		this->type = other.type;
	}
	return (*this);
}

std::string	Dog::getType() const
{
	return (this->type);
}

Brain	*Dog::getBrain() const
{
	return (this->B);
}

void	Dog::makeSound() const
{
	std::cout << GREEN << "** WHOUF **" << RESET << std::endl;
}

Dog::~Dog()
{
	std::cout << YELLOW << "WHOUF ** Dog destructor called ** WHOUF" << RESET << std::endl;
	delete (this->B);
}
