/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwen <gwen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 09:27:55 by gwen              #+#    #+#             */
/*   Updated: 2024/06/23 09:52:30 by gwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
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