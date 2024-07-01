/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:07:34 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/01 17:12:48 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << RED << "Error: could not open file.\nProgram needs <file.txt> as argument"
					<< RESET << std::endl;
		return (1);
	}
	BitcoinExchange Btc;
	Btc.displayResult(argv[1]);
	return (0);
}