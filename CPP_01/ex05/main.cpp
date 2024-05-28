/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:13:34 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/28 17:52:57 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	std::string	level;
	Harl		Harl;
	std::cout << "What is the level of your complain?\n(DEBUG | INFO | WARNING | ERROR)"
				<< std::endl;
	std::cin >> level;
	Harl.complain(level);	
	return (0);
}