/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:00:10 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/30 11:59:17 by gdetourn         ###   ########.fr       */
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

Fixed& Fixed::Fixed::operator=(const Fixed &newNumber)
{
	std::cout << "Copy assignement Fixed::operator called" << std::endl;
	if (this != &newNumber)
		this->RawBits = newNumber.getRawBits();
	return (*this);
}

std::ostream &Fixed::operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.getRawBits() / (float)(1 << fix.NbWidth);
	return (out);
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->RawBits = n << NbWidth;
}

Fixed::Fixed(const float nf)
{
	std::cout << "Float constructor called" << std::endl;
	this->RawBits = static_cast<int>(roundf(nf * (1 << NbWidth)));
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
	return (static_cast<float>(this->RawBits) / (1 << NbWidth));
}

int		Fixed::toInt(void) const
{
	return (this->RawBits >> NbWidth);
}

//Comparison Fixed::operators

bool	Fixed::operator>(const Fixed &newNumber) const
{
	if (this->RawBits > newNumber.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &newNumber) const
{
	if (this->RawBits < newNumber.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &newNumber) const
{
	if (this->RawBits >= newNumber.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &newNumber) const
{
	if (this->RawBits >= newNumber.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &newNumber) const
{
	if (this->RawBits == newNumber.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &newNumber) const
{
	if (this->RawBits != newNumber.getRawBits())
		return (true);
	return (false);
}

//arithmetic Fixed::operators

Fixed	Fixed::operator+(const Fixed &newNumber) const
{
	return (Fixed(this->toFloat() + newNumber.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &newNumber) const
{
	return (Fixed(this->toFloat() - newNumber.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &newNumber) const
{
	return (Fixed(this->toFloat() * newNumber.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &newNumber) const
{
	return (Fixed(this->toFloat() / newNumber.toFloat()));
}

//incrementation et decrementation
Fixed	Fixed::operator++();//		pre-incrementation;
Fixed	Fixed::operator++(int);//	post-incrementation;
Fixed	Fixed::operator--();//		pre-incrementation;
Fixed	Fixed::operator--(int);//	post-incrementation;

static Fixed	Fixed::&min(Fixed &a, Fixed &b);
static const Fixed	Fixed::&min(const Fixed &a, const Fixed &b);
static Fixed	Fixed::&max(Fixed &a, Fixed &b);
static const Fixed	Fixed::&max(const Fixed &a, const Fixed &b);

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
