/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:00:10 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/30 10:57:52 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->RawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &newNumber)
{
	std::cout << "Copy constructor called" << std::endl;
	this->RawBits = newNumber.getRawBits();
	// *this = newNumber;
}

Fixed& Fixed::operator=(const Fixed &newNumber)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &newNumber)
		this->RawBits = newNumber.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->RawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->RawBits = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
