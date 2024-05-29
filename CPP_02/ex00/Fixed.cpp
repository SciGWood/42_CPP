/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:00:10 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/29 17:14:42 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->RawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->RawBits = other.getRawBits();
	// *this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->RawBits = other.getRawBits();
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
