/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:00:20 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/13 17:38:41 by gdetourn         ###   ########.fr       */
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

static void	ScalarConverter::convert(const std::string &str)
{

}

static bool	ScalarConverter::isChar(const std::string &str)
{

}

static bool	ScalarConverter::isInt(const std::string &str)
{

}

static bool	ScalarConverter::isDouble(const std::string &str)
{

}

static bool	ScalarConverter::isFloat(const std::string &str)
{

}

static void	ScalarConverter::printChar(const std::string &str)
{

}

static void	ScalarConverter::printInt(const std::string &str)
{

}

static void	ScalarConverter::printDouble(const std::string &str)
{

}

static void	ScalarConverter::printFloat(const std::string &str)
{

}

ScalarConverter::~ScalarConverter()
{
}
