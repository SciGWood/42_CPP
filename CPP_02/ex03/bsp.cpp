/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:22:29 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/30 17:46:57 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	Bary_ab = (b.get_x() - a.get_x()) * (point.get_y() - a.get_y())
						- (b.get_y() - a.get_y()) * (point.get_x() - a.get_x());
	Fixed	Bary_cb = (c.get_x() - b.get_x()) * (point.get_y() - b.get_y())
						- (c.get_y() - b.get_y()) * (point.get_x() - b.get_x());
	Fixed	Bary_ac = (a.get_x() - c.get_x()) * (point.get_y() - c.get_y())
						- (a.get_y() - c.get_y()) * (point.get_x() - c.get_x());
	/* return ((Bary_ab > 0 && Bary_cb > 0 && Bary_ac > 0)
			|| (Bary_ab < 0 && Bary_cb < 0 && Bary_ac < 0)); */
	if ((Bary_ab > 0 && Bary_cb > 0 && Bary_ac > 0)
		|| (Bary_ab < 0 && Bary_cb < 0 && Bary_ac < 0))
		return (true);
	return (false);
}
