/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:01:46 by gdetourn          #+#    #+#             */
/*   Updated: 2024/07/04 14:35:22 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << RED << "A list of positive integers is required" << RESET << std::endl;
		return (1);
	}
	std::vector<int>	Vector;
	std::deque<int>		Deque;
	std::list<int>		List;
	for (int j = 0; j < argc; j++)
	{
		int	number = std::atoi(argv[j]);
		if (number < 0)
		{
			std::cout << "Error: Only positive integers accepted" << std::endl;
			return (1);
		}
		Vector.push_back(number);
		Deque.push_back(number);
		List.push_back(number);
	}
	
	PmergeMe			PmMe;
	
	std::cout << GREEN << "Before: " << std::endl;
	size_t i = 0;
	while (i < Vector.size())
		std::cout << Vector[i++] << " ";
	std::cout << '\n' << RESET << std::endl;

	clock_t				start = clock();
	PmMe.sortPmMeVector(Vector);
	clock_t				end = clock();
	double				VectorSortTime  = static_cast<double>(end - start);
	
	clock_t				startD = clock();
	PmMe.sortPmMeDeque(Deque);
	clock_t				endD = clock();
	double				DequeSortTime  = static_cast<double>(endD - startD);

	clock_t				startL = clock();
	List.sort();
	clock_t				endL = clock();
	double				ListSortTime  = static_cast<double>(endL - startL);

	std::cout << YELLOW << "After: " << std::endl;
	i = 0;
	while (i < Vector.size())
		std::cout << Vector[i++] << " ";
	
	std::cout << "\n\n" << BLUE << "Time to process a range of " << Vector.size() - 1
				<< " elements with std::vector<int> : " << VectorSortTime << "us"
				<< RESET << std::endl;

	std::cout << '\n' << CYAN << "Time to process a range of " << Deque.size() - 1
				<< " elements with std::deque<int> : " << DequeSortTime << "us"
				<< RESET << std::endl;

	std::cout << '\n' << MAGENTA << "Time to process a range of " << List.size() - 1
				<< " elements with std::list<int> : " << ListSortTime << "us"
				<< RESET << std::endl;

	return (0);
}