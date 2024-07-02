/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:47:57 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/02 11:02:31 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << CYAN << "Program needs an arithmetic argument with "
					<< "numbers from 0 to 9 and operations +-/*"
					<< RESET << std::endl;
		return (1);
	}
	RPN	calcul;
	calcul.doOp(argv[1]);
	return (0);
}