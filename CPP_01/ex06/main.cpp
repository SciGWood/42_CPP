/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:13:34 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/29 11:26:16 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "\nYou can only ask for DEBUG, INFO, WARNING or ERROR\n\n"
					<< "       Let's try again ;) !!\n" << std::endl;
		return (1);
	}
	std::string	level = argv[1];
	Harl		Harl;
	Harl.complain(level);
	return (0);
}