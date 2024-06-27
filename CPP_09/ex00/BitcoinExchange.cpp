/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:07:53 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/27 14:49:24 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	internalDB("data.csv", std::ifstream::in);
	if (!internalDB.is_open())
		std::cerr << "Error\nFail to open internal database" << std::endl;
	else
	{
		std::string	line;
		size_t		comma;

		std::getline(internalDB, line);
		while (std::getline(internalDB, line))
		{
			comma = line.find(',');
			std::string	rate = line.substr(comma + 1);
			this->BtcRate[line.substr(0, comma)] = ft_StrToFloat(rate);
		}
		internalDB.close();
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != other)
		*this = other;
	return (*this);
}

float	BitcoinExchange::ft_StrToFloat(std::string &str)
{
	float	res;
	std::stringstream	s(str);

	s >> res;
	return (res);
}

int		BitcoinExchange::ft_StrToInt(std::string &str)
{
	int	res;
	std::stringstream	s(str);

	s >> res;
	return (res);
}

bool	BitcoinExchange::validDate()
{

}

bool	BitcoinExchange::validValue()
{

}

void	BitcoinExchange::displayResult(std::string &filename)
{
	if (!validDate())
		std::cout << "Error\nInvalid Date - Only Year-Month-Day" << std::endl;
	if (!validValue())
		std::cout << "Error\nInvalide Value - Only 0 < n < 1000" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
}