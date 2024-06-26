/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:28:27 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/26 12:10:35 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
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
				<< CYAN << "[5]   0\n[4]  42\n[3] 737\n[2]   5\n[1]   3\n[0]   5\n\n"
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
	std::cout << GREEN << "\nCopied mstack in s then pop 0, 42, 737 and push 42001\n"
				<< "\nIterating s from [0] to [5]:\n" << RESET << std::endl;
	while (its != ites)
	{
		std::cout << CYAN << "[" << i << "] " << *its << RESET << std::endl;
		++its;
		i++;
	}
	return (0);
}
	// s.swap(mstack);
	// std::cout << GREEN << "\nSwap s and mstack, so\nSize of mstack is now: " << RED << mstack.size()
	// 			<< CYAN << " and top number is: " << RED << mstack.top() << CYAN
	// 			<< "\nSize of s is now: " << RED << s.size() << CYAN << " and top number is: "
	// 			<< RED << s.top() << RESET << std::endl;