/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:01:59 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/02 17:11:10 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

const char	*PmergeMe::InvalidInputException::what() const throw()
{
	return ("Invalid Input");
}

const char	*PmergeMe::ZeroDivException::what() const throw()
{
	return ("Division by zero not possible");
}

PmergeMe::~PmergeMe()
{
}
