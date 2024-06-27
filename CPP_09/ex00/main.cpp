/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:07:34 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/27 11:59:05 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << RED << "Error: could not open file.\nProgram needs <file.txt> as argument\n"
					<< RESET << std::endl;
	}
	BitcoinExchange Btc;
	Btc.displayResult(argv[1]);
	return (0);
}