/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 09:27:55 by gwen              #+#    #+#             */
/*   Updated: 2024/06/24 14:02:42 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
		std::cout << '\n' << std::endl;
	{
		int	a = 42;
		int	b = 156;

		std::cout << CYAN << "a = " << a << " b = " << b << RESET
					"\n--> after swap function: " << std::endl;
		::swap(a, b);
		std::cout << MAGENTA << "a = " << a << " b = " << b << RESET << '\n'
					<< GREEN << "min(" << a << ", " << b << ") = " << ::min(a, b) << RESET
					<< RED << "\nmax(" << a << ", " << b << ") = " << ::max(a, b) << RESET
					<< '\n' << std::endl;
	}

	{
		std::string	a = "Bonjour";
		std::string	b = "toi";

		std::cout << CYAN << "a = " << a << " b = " << b << RESET
					"\n--> after swap function: " << std::endl;
		::swap(a, b);
		std::cout << MAGENTA << "a = " << a << " b = " << b << RESET << '\n'
					<< GREEN << "min(" << a << ", " << b << ") = " << ::min(a, b) << RESET
					<< RED << "\nmax(" << a << ", " << b << ") = " << ::max(a, b) << RESET
					<< '\n' << std::endl;

	}
	return (0);
}