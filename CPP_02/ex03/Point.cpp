/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:21:38 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/30 17:09:39 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point()
{
	(Fixed)x = 0;
	(Fixed)y = 0;
}

Point::Point(const float a, const float b)
{
	(Fixed)x = a;
	(Fixed)y = b;
}

Point::Point(const Point &newNumber)
{
	(Fixed)x = newNumber.x;
	(Fixed)y = newNumber.y;
}

Point& Point::operator=(const Point &newNumber)
{
	if (this != &newNumber)
	{
		(Fixed)x = newNumber.x;
		(Fixed)y = newNumber.y;
	}
	return (*this);
}

Fixed	Point::get_x() const
{
	return ((Fixed)x);
}

Fixed	Point::get_y() const
{
	return ((Fixed)y);
}

Point::~Point()
{
}
