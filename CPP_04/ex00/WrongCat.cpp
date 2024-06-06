/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:54:26 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/05 16:01:15 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << YELLOW << "WRONG MIAOU ** WrongCat default constructor called ** WRONG MIAOU"
				<< RESET << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string	WrongCat::getType() const
{
	return (this->type);
}

void	WrongCat::makeSound() const
{
	std::cout << BLUE << "** WRONG MIAOU **" << RESET << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << YELLOW << "WRONG MIAOU ** WrongCat destructor called ** WRONG MIAOU"
				<< RESET << std::endl;
}
