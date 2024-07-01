/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:07:53 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/01 17:13:03 by gdetourn         ###   ########.fr       */
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
	if (this != &other)
		*this = other;
	return (*this);
}

float	BitcoinExchange::ft_StrToFloat(std::string &str)
{
	float				res;
	std::stringstream	s(str);

	s >> res;
	return (res);
}

int		BitcoinExchange::ft_StrToInt(std::string str)
{
	int					res;
	std::stringstream	s(str);

	s >> res;
	return (res);
}

bool	BitcoinExchange::validDate(std::string &date)
{
	int	year, month, day;

	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cerr << "Error: bad input (format is YYYY-MM-DD) => " << date << std::endl;
		return (false);
	}
	year = ft_StrToInt(date.substr(0, 4));
	month = ft_StrToInt(date.substr(5, 7));
	day = ft_StrToInt(date.substr(8, 10));
	if (year < 2009 || year > 2022)
	{
		std::cerr << MAGENTA << "Error: bad input => " << date << " (Year out of range)"
					<< RESET << std::endl;
		return (false);
	}
	if (month < 0 || month > 12)
	{
		std::cerr << MAGENTA << "Error: bad input => " << date << " (Month not valid)"
					<< RESET << std::endl;
		return (false);
	}
	if (day < 0 || day > 31 || (day > 29 && month == 2)
		|| (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)))
	{
		std::cerr << MAGENTA << "Error: bad input => " << date << " (Day not valid)"
					<< RESET << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::validValue(std::string	&value)
{
	float	val = ft_StrToFloat(value);

	if (val < 0)
	{
		std::cerr << YELLOW << "Error: not a positive number." << RESET << std::endl;
		return (false);
	}
	if (value.size() > 8 || val > 1000)
	{
		std::cerr << YELLOW << "Error: too large a number." << RESET << std::endl;
		return (false);
	}
	return (true);
}

float	BitcoinExchange::getRate(std::string &date)
{
	std::map<std::string, float>::iterator	it = this->BtcRate.lower_bound(date);

	if (it->first != date && it != this->BtcRate.begin())
		it--;
	return (it->second);
}

void	BitcoinExchange::displayResult(std::string filename)
{
	std::ifstream	file(filename.c_str());

	if (!file.is_open())
		std::cerr << "Error\nFail to open file " << filename << std::endl;

	std::string		line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size_t	separator = line.find('|');
		if (separator == 0 || line.length() < separator + 2)
		{
			std::cerr << RED << "Error: bad input => " << line << RESET << std::endl;
			continue;
		}
		std::string	date = line.substr(0, separator - 1);
		if (!this->validDate(date))
			continue;
		std::string	value = line.substr(separator + 2);
		if (!validValue(value))
			continue;
		
		float ValueToPrint = ft_StrToFloat(value);
		std::cout << CYAN << date << " => " << value << " = " << std::setprecision(2)
					<< ValueToPrint * this->getRate(date) << RESET << std::endl;
	}
}

BitcoinExchange::~BitcoinExchange()
{
}
