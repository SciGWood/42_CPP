/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:14:07 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/25 11:49:46 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	{
		std::list<int>	list;
		int				a = 8;
		int				b = 10;

		list.push_back(4);
		list.push_back(8);
		list.push_back(6);

		try
		{
			std::list<int>::iterator result = easyfind(list, a);
			std::cout << GREEN << a << " found at index " << std::distance(list.begin(), result)
						<< RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << a << e.what() << RESET << std::endl;
		}

		try
		{
			std::list<int>::iterator result = easyfind(list, b);
			std::cout << b << " found at index " << std::distance(list.begin(), result) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << b << e.what() << RESET << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::vector<int>	vector(10, 42);
		int				a = 42;
		int				b = 0;

		try
		{
			std::vector<int>::iterator result = easyfind(vector, a);
			std::cout << GREEN << a << " found at index " << std::distance(vector.begin(), result)
						<< RESET << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << a << e.what() << RESET << std::endl;
		}

		try
		{
			std::vector<int>::iterator result = easyfind(vector, b);
			std::cout << b << " found at index " << std::distance(vector.begin(), result) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << b << e.what() << RESET << std::endl;
		}
	}
	
    return (0);
}