/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:00:10 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/30 15:10:01 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->RawBits = 0;
}

Fixed::Fixed(const Fixed &newNumber)
{
	this->RawBits = newNumber.getRawBits();
	// *this = newNumber;
}

Fixed& Fixed::operator=(const Fixed &newNumber)
{
	if (this != &newNumber)
		this->RawBits = newNumber.getRawBits();
	return (*this);
}

Fixed::Fixed(const int n)
{
	this->RawBits = n << NbWidth;
}

Fixed::Fixed(const float nf)
{
	this->RawBits = static_cast<int>(roundf(nf * (1 << NbWidth)));
}

int		Fixed::getRawBits(void) const
{
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
Fixed	Fixed::operator++()//		pre-incrementation;
{
	this->RawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)//	post-incrementation;
{
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--()//		pre-decrementation;
{
	this->RawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)//	post-decrementation;
{
	Fixed tmp = *this;
	--(*this);
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}

Fixed::~Fixed()
{
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}
