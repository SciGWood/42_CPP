/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:14:09 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/29 11:24:42 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"
				"I love having extra bacon for my"
				"7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n"
				<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n"
				"I cannot believe adding extra bacon costs more money.\n"
				"You didn't put enough bacon in my burger! If you did, I wouldn't"
				"be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
				"I think I deserve to have some extra bacon for free.\nI've been"
				"coming for years whereas you started working here since last month.\n"
				<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n"
				"This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*priv_fonct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
											&Harl::error};
	std::string	complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	case_nb = -1;
	for (int i = 0; i < 4; i++)
	{
		if (complains[i] == level)
			case_nb = i;
	}
	switch (case_nb)
	{
		case 0:
			(this->*priv_fonct[0])();
		case 1:
			(this->*priv_fonct[1])();
		case 2:
			(this->*priv_fonct[2])();
		case 3:
			(this->*priv_fonct[3])();
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]\n" << std::endl;
	}
}

Harl::~Harl()
{
}
