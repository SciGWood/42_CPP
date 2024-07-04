/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:07:34 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/04 14:57:43 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << RED << "Error: could not open file.\n"
					<< "Program needs a \"table file\" as argument"
					<< RESET << std::endl;
		return (1);
	}
	BitcoinExchange Btc;
	Btc.displayResult(argv[1]);
	return (0);
}