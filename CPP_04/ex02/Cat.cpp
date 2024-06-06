/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:26 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/06 15:40:07 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	std::cout << YELLOW << "MIAOU ** Cat default constructor called ** MIAOU" << RESET << std::endl;
	this->type = "Cat";
	this->B = new Brain();
}

Cat::Cat(const Cat &other)
{
	this->B = new Brain(*(other.getBrain()));
	this->type = other.getType();
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this != &other && this->B)
	{
		delete (this->B);
		this->B = new Brain;
		this->type = other.type;
	}
	return (*this);
}

std::string	Cat::getType() const
{
	return (this->type);
}

Brain	*Cat::getBrain() const
{
	return (this->B);
}

void	Cat::makeSound() const
{
	std::cout << BLUE << "** MIAOU **" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << YELLOW << "MIAOU ** Cat destructor called ** MIAOU" << RESET << std::endl;
	delete (this->B);
}
