/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:14:09 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/29 10:12:58 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my"
			"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
			<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
				"You didn't put enough bacon in my burger! If you did, I wouldn't"
				"be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been"
				"coming for years whereas you started working here since last month."
				<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*priv_fonct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
											&Harl::error};
	std::string	complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complains[i] == level)
			(this->*priv_fonct[i])();
	}
	if (!level.empty() && (level != "DEBUG" && level != "INFO" && level != "WARNING"
		&& level != "ERROR"))
	{
		std::cout << "\nYou can only ask for DEBUG, INFO, WARNING or ERROR\n\n"
					<< "       Let's try again ;) !!\n\n" << std::endl;
	}
}

Harl::~Harl()
{
}
