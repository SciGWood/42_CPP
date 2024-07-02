/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:47:57 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/02 16:07:13 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << CYAN << "Program needs an arithmetic argument with\n"
					<< "numbers from 0 to 9 and operations + - / *"
					<< "\nExample:  <./RPN \"8 9 * 9 - 9 - 9 - 4 - 1 +\">"
					<< RESET << std::endl;
		return (1);
	}
	try
	{
		RPN	calcul;
		calcul.calcRes(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << MAGENTA << e.what() << RESET << '\n';
	}
	return (0);
}