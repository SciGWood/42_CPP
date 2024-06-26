/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:53:55 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/26 10:51:10 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span &other)
{
	*this = other;
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_N = other._N;
		this->_vector = other._vector;
	}
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (this->_vector.size() >= this->_N)
		throw (Span::NoMoreSpaceException());
	this->_vector.push_back(nb);
}

void	Span::addNumberS(unsigned int size)
{
	srand(time(NULL));
	try
	{
		for (unsigned int i = 0; i < size; i++)
			this->addNumber(rand());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	Span::addRange(std::vector<int> table2)
{
	try
	{
		if (this->_vector.size() >= this->_N || this->_vector.size() + table2.size() > this->_N)
			throw (Span::NoMoreSpaceException());
		this->_vector.insert(this->_vector.end(), table2.begin(), table2.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int	Span::shortestSpan() const
{
	if (this->_vector.size() <= 1)
		throw (Span::DistanceException());
	std::vector<int> sortVector(this->_vector);
	std::sort(sortVector.begin(), sortVector.end());

	int	shortest = sortVector[1] - sortVector[0];
	for (std::vector<int>::size_type i = 2; i != sortVector.size(); i++)
	{
		int delta = sortVector[i] - sortVector[i - 1];
		if (delta < shortest)
			shortest = delta;
	}
	return (shortest);
}

int	Span::longestSpan() const
{
	if (this->_vector.size() <= 1)
		throw (Span::DistanceException());
	int	max = *std::max_element(this->_vector.begin(), this->_vector.end());
	int	min = *std::min_element(this->_vector.begin(), this->_vector.end());
	return (max - min);
}

const char	*Span::NoMoreSpaceException::what() const throw()
{
	return ("No more space in this container.");
}
const char	*Span::DistanceException::what() const throw()
{
	return ("No distance available");
}

Span::~Span()
{
}
