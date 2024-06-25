/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:53:34 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/25 17:24:15 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main()
{
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << "Classic addNumber function:" << std::endl;
		std::cout << CYAN << sp.shortestSpan() << RESET << std::endl;
		std::cout << MAGENTA << sp.longestSpan() << RESET << '\n' << std::endl;
	}

	{
		try
		{
			Span span = Span(15000);

			span.addNumber(6);
			span.addNumber(3);
			span.addNumber(17);
			span.addNumber(9);
			span.addNumber(11);
			std::cout << "Classic addNumber function:" << std::endl;
			std::cout << CYAN << span.shortestSpan() << RESET << std::endl;
			std::cout << MAGENTA << span.longestSpan() << RESET << '\n' << std::endl;

			span.addNumberS(14000);
			std::cout << "Optimized addNumber function:" << std::endl;
			std::cout << GREEN << span.shortestSpan() << RESET << std::endl;
			std::cout << BLUE << span.longestSpan() << RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}



    return (0);
}