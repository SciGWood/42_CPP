
#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point();//										Default constructor
		Point(const Point &newNumber);//				Copy constructor
		Point&	operator=(const Point &newNumber);//	Copy assignement operator
		~Point();//										Destructor

		Point(const float a, const float b);
		Fixed	get_x() const;
		Fixed	get_y() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif