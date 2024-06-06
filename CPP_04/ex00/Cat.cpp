/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:26 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/06 14:58:48 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << YELLOW << "MIAOU ** Cat default constructor called ** MIAOU" << RESET << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	Cat::getType() const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << BLUE << "** MIAOU **" << RESET << std::endl;
}

Cat::~Cat()
{
	std::cout << YELLOW << "MIAOU ** Cat destructor called ** MIAOU" << RESET << std::endl;
}
