/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:00:20 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/14 15:22:14 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return (*this);
}

void	ScalarConverter::convert(const std::string &str)
{
	printType(str);
	if (!isChar(str) && !isInt(str) && !isFloat(str) && !isDouble(str))
		return ;
	printChar(str);
	printInt(str);
	printFloat(str);
	printDouble(str);
}

void	ScalarConverter::printType(const std::string	&str)
{
	if (isChar(str))
		std::cout << MAGENTA << "\"char\" type detected" << RESET << std::endl;
	else if (isInt(str))
		std::cout << MAGENTA << "\"int\" type detected" << RESET << std::endl;
	else if (isFloat(str))
		std::cout << MAGENTA << "\"float\" type detected" << RESET << std::endl;
	else if (isDouble(str))
		std::cout << MAGENTA << "\"double\" type detected" << RESET << std::endl;
	else
		std::cout << CYAN << "\"unknown\" type detected" << RESET << std::endl;
}

bool	ScalarConverter::isChar(const std::string &str)
{
	if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return (true);
	return (false);
}

bool	ScalarConverter::isInt(const std::string &str)
{
	for (size_t i = ((str[0] == '-' || str[0] == '+') ? 1 : 0); i < str.length(); i++)
	{
		if (!isdigit(str[i]) || !isprint(str[i]))
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isFloat(const std::string &str)
{
	bool	isDot = false;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (true);
	if (str[str.length() - 1] != 'f')
		return (false);
	for (size_t i = ((str[0] == '-' || str[0] == '+') ? 1 : 0); i < str.length() - 1; i++)
	{
		if (str[i] == '.')
		{
			if (isDot)
				return (false);
			isDot = true;
		}
		else if (!isdigit(str[i]))
			return (false);
	}
	return (isDot);
}

bool	ScalarConverter::isDouble(const std::string &str)
{
	bool	isDot = false;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	for (size_t i = ((str[0] == '-' || str[0] == '+') ? 1 : 0); i < str.length(); i++)
	{
		if (str[i] == '.')
		{
			if (isDot)
				return (false);
			isDot = true;
		}
		else if (!isdigit(str[i]))
			return (false);
	}
	return (isDot);
}

void	ScalarConverter::printChar(const std::string &str)
{
	double	c;

	std::istringstream(str) >> c;
	if (isChar(str))
		std::cout << "char: " << str << std::endl;
	else if (!isprint(static_cast<char>(c)))
		std::cout << "char: not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
}

void	ScalarConverter::printInt(const std::string &str)
{
	double	i;

	std::istringstream(str) >> i;
	if (isChar(str))
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
}

void	ScalarConverter::printFloat(const std::string &str)
{
	double	f;

	std::istringstream(str) >> f;
	if (isChar(str))
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
	else if (f == (int)f)
		std::cout << "float: " << static_cast<float>(f) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(f) << "f" << std::endl;
}

void	ScalarConverter::printDouble(const std::string &str)
{
	double	d;

	std::istringstream(str) >> d;
	if (isChar(str))
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
	else if (d == (int)d)
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(d) << std::endl;
}

ScalarConverter::~ScalarConverter()
{
}
