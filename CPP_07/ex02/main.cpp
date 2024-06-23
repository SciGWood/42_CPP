/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwen <gwen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 10:32:33 by gwen              #+#    #+#             */
/*   Updated: 2024/06/23 16:36:06 by gwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int	main()
{
	{
		Array<int>	arr(6);
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << "Array[" << i << "] = " << arr[i] << std::endl;
		arr[0] = 5;
		arr[1] = 10;
		arr[2] = 25;
		arr[3] = 18;
		arr[4] = 32;
		arr[5] = 28;
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << "Array[" << i << "] = " << arr[i] << std::endl;
	}

	{
		Array<int>	arr(3);
		try
		{
			arr[3] = 6;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n' << std::endl;
		}
	}

	{
		Array<std::string>	arr(6);
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << "Array[" << i << "] = " << arr[i] << std::endl;
		arr[0] = "Hello";
		arr[1] = "World";
		arr[2] = "Dans";
		arr[3] = "le";
		arr[4] = "Train";
		arr[5] = "toujours en RETARD !!";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << "Array[" << i << "] = " << arr[i] << std::endl;
	}

	return (0);
}