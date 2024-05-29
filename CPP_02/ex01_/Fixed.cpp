/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwen <gwen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:00:10 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/29 21:48:26 by gwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->RawBits = 0;
	std::cout << "Default constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.getRawBits() / (float)(1 << fix.fraction);
	return (out);
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->RawBits = n << fraction;
}

Fixed::Fixed(const float nf)
{
	std::cout << "Float constructor called" << std::endl;
	this->RawBits = static_cast<int>(roundf(nf * (1 << fraction)));
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
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->RawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->RawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->RawBits) / (1 << fraction));
}

int		Fixed::toInt(void) const
{
	return (this->RawBits >> fraction);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
