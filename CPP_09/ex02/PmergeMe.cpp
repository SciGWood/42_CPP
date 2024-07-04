/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:01:59 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/04 14:24:08 by gdetourn         ###   ########.fr       */
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

void	PmergeMe::sortPmMeVector(std::vector<int> &vector)
{
	if (vector.size() <= 1)
		return ;
	size_t	half = vector.size() / 2;
	std::vector<int>	left(vector.begin(), vector.begin() + half);
	std::vector<int>	right(vector.begin() + half, vector.end());
	sortPmMeVector(left);
	sortPmMeVector(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), vector.begin());
}

void	PmergeMe::sortPmMeDeque(std::deque<int> &deque)
{
	if (deque.size() <= 1)
		return ;
	size_t	half = deque.size() / 2;
	std::deque<int>	left(deque.begin(), deque.begin() + half);
	std::deque<int>	right(deque.begin() + half, deque.end());
	sortPmMeDeque(left);
	sortPmMeDeque(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), deque.begin());
}

PmergeMe::~PmergeMe()
{
}
