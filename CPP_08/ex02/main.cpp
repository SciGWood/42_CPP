/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:28:27 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/26 13:40:24 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << GREEN << "Push 5 then 17 so stack should be like that:\n\n" << CYAN
					<< "[1]  17\n[0]   5\n\nTop is: " << RED << mstack.top() << RESET << std::endl;
		mstack.pop();
		std::cout << CYAN << "Top number (17) has been poped so size is: " << RED
					<< mstack.size() << RESET << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(42);
		mstack.push(0);
		std::cout << GREEN << "\nPush 3, 5, 737, 42 and 0 so stack should be like that:\n\n"
					<< CYAN << "[5]   0\n[4]  42\n[3] 737\n[2]   5\n[1]   3\n[0]   5\n"
					<< RESET << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		int	i = 0;
		std::cout << GREEN << "Iterating mstack from [0] to [5]:\n" << RESET << std::endl;
		while (it != ite)
		{
			std::cout << CYAN << "[" << i << "] " << *it << RESET << std::endl;
			++it;
			i++;
		}

		MutantStack<int> s(mstack);
		s.pop();
		s.pop();
		s.pop();
		s.push(42001);
		
		MutantStack<int>::iterator its = s.begin();
		MutantStack<int>::iterator ites = s.end();
		i = 0;
		std::cout << YELLOW << "\nCopied mstack in s then pop 0, 42, 737 and push 42001\n"
					<< GREEN << "\nIterating s from [0] to [5]:\n" << RESET << std::endl;
		while (its != ites)
		{
			std::cout << CYAN << "[" << i << "] " << *its << RESET << std::endl;
			++its;
			i++;
		}
	}
	{
		std::cout << YELLOW << "\n------------------------------------------\n\n"
					<< RED << "Same test with std::list<int>:\n" << RESET << std::endl;

		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << GREEN << "Push 5 then 17 so stack should be like that:\n\n" << CYAN
					<< "[1]  17\n[0]   5\n" << RESET << std::endl;
		std::cout << CYAN << "Size is: " << RED
					<< mstack.size() << RESET << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(42);
		mstack.push_back(0);
		std::cout << GREEN << "\nPush 3, 5, 737, 42 and 0 so stack should be like that:\n\n"
					<< CYAN << "[6]   0\n[5]  42\n[4] 737\n[3]   5\n[2]   3\n[1]  17\n[0]   5\n\n"
					<< RESET << std::endl;

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		
		++it;
		--it;
		int	i = 0;
		std::cout << GREEN << "Iterating mstack from [0] to [5]:\n" << RESET << std::endl;
		while (it != ite)
		{
			std::cout << CYAN << "[" << i << "] " << *it << RESET << std::endl;
			++it;
			i++;
		}
	}
	return (0);
}
