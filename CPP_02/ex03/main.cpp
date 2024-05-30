/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:00:26 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/30 17:49:17 by gdetourn         ###   ########.fr       */
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
	Point	P(2.0f, 1.8f);
	Point	G(0.0f, 5.2f);
	std::cout << "Point a(5.4f, 2.3f)\nPoint b(4.0f, 6.0f)\nPoint c(10.8f, -2.6f)\n\n"
				<< BLUE << "Point P(-2.6f, 5.8f)\n" << RESET << std::endl;
	if (!bsp(a, b, c, P))
		std::cout << GREEN << "Point P is inside the ABC triangle" << RESET << std::endl;
	else
		std::cout << RED << "Point P is outside of the ABC triangle\n" << RESET << std::endl;

	std::cout << BLUE << "Point G(f, f)\n" << RESET << std::endl;
	if (!bsp(a, b, c, G))
		std::cout << GREEN << "Point G is inside the ABC triangle" << RESET << std::endl;
	else
		std::cout << RED << "Point G is outside of the ABC triangle\n" << RESET << std::endl;

	float	x;
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
		std::cout << RED << "This point is outside of the ABC triangle" << RESET << std::endl;
	return (0);
}