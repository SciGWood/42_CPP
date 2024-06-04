/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:22:29 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/04 11:53:52 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static Fixed	area(Point const &point, Point const &d, Point const &e)
{
	return Fixed((point.get_x().toFloat() * (d.get_y().toFloat() - e.get_y().toFloat()))
				+ (d.get_x().toFloat() * (e.get_y().toFloat() - point.get_y().toFloat()))
				+ (e.get_x().toFloat() * (point.get_y().toFloat() - d.get_y().toFloat()))
				)/2;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	/*calculates areas and check if point is inside or outside of the triangle ABC*/
	Fixed	ABC = area(a, b, c);

	Fixed	PAB = area(point, a, b);
	PAB = PAB < 0 ? PAB * -1 : PAB;

	Fixed	PBC = area(point, b, c);
	PBC = PBC < 0 ? PBC * -1 : PBC;

	Fixed	PAC = area(point, a, c);
	PAC = PAC < 0 ? PAC * -1 : PAC;

	if (ABC == PAB + PBC + PAC)
		return (true);
	return (false);
}
