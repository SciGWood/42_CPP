/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:48:15 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/02 16:06:41 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &other)
{
	*this = other;
}

RPN&	RPN::operator=(const RPN& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

void	RPN::doOp(int a, int b, char op)
{
	switch (op)
	{
		case '+':
			this->Pile.push(a + b);
			break;
		case '-':
			this->Pile.push(a - b);
			break;
		case '*':
			this->Pile.push(a * b);
			break;
		case '/':
			if (b == 0)
				throw (RPN::ZeroDivException());
			this->Pile.push(a / b);
			break;
	}
}

bool	RPN::validInput(std::string input)
{
	std::stringstream	iss(input);
	std::string			token;

	while (std::getline(iss, token, ' '))
	{
		if (token.size() > 1 || token.find_first_not_of("0123456789+-/*") != std::string::npos)
			return (false);
	}
	return (true);
}

void	RPN::calcRes(std::string input)
{
	if (!validInput(input))
		throw (RPN::InvalidInputException());
	for (std::string::const_iterator it = input.begin(); it != input.end(); it++)
	{
		if (std::isspace(*it))
			continue;
		else if (std::isdigit(*it))
			this->Pile.push(*it - '0');
		else
		{
			if (this->Pile.size() < 2)
				throw (RPN::InvalidInputException());
			int	b = this->Pile.top();
			this->Pile.pop();
			int a = this->Pile.top();
			this->Pile.pop();
			doOp(a, b, *it);
		}
	}
	if (this->Pile.size() != 1)
		throw (RPN::InvalidInputException());
	std::cout << CYAN << this->Pile.top() << RESET << std::endl;
}

const char	*RPN::InvalidInputException::what() const throw()
{
	return ("Invalid Input");
}

const char	*RPN::ZeroDivException::what() const throw()
{
	return ("Division by zero not possible");
}

RPN::~RPN()
{
}