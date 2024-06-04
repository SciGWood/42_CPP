/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:00:26 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/04 17:43:00 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

int main(void)
{
	Point	a(0.0f, 3.0f);
	Point	b(0.0f, 0.0f);
	Point	c(4.0f, 0.0f);
	Point	I(2.0f, 1.8f);
	Point	O(0.0f, 5.2f);
	std::cout << "Point a(0.0f, 3.0f)\nPoint b(0.0f, 0.0f)\nPoint c(4.0f, 0.0f)\n\n"
				<< BLUE << "Point I(2.0f, 1.8f)" << RESET << std::endl;
	if (bsp(Point(0.0f, 3.0f), Point(0.0f, 0.0f), Point(4.0f, 0.0f), Point(2.0f, 1.8f)))
		std::cout << GREEN << "Point I is inside the ABC triangle\n" << RESET << std::endl;
	else
		std::cout << RED << "Point I is outside of the ABC triangle\n" << RESET << std::endl;

	std::cout << BLUE << "Point O(0.0f, 5.2f)" << RESET << std::endl;
	if (!bsp(Point(0.0f, 3.0f), Point(0.0f, 0.0f), Point(4.0f, 0.0f), Point(0.0f, 5.2f)))
		std::cout << GREEN << "Point O is inside the ABC triangle\n" << RESET << std::endl;
	else
		std::cout << RED << "Point O is outside of the ABC triangle\n" << RESET << std::endl;
	return (0);
}

	/* float	x;
	float	y;
	std::cout << "Your turn to define a Point P coordinates (float)(x,y)\n\n"
					"P.x = " << std::flush;
	std::cin >> x;
	std::cout << "P.y = " << std::flush;
	std::cin >> y;
	Point	D(x, y);
	std::cout << BLUE << "\nPoint P(" << x << ", " << y << ")\n" << RESET << std::endl;
	if (bsp(a, b, c, D))
		std::cout << GREEN << "This point is inside the ABC triangle" << RESET << std::endl;
	else
		std::cout << RED << "This point is outside of the ABC triangle" << RESET << std::endl; */