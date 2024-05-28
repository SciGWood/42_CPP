/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:44:39 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/28 12:00:46 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>

# define YELLOW "\033[33m"
# define RESET "\033[0m"

int	main(void)
{
	std::string Brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &Brain;
	std::string &stringREF = Brain;

	std::cout << "The memory address of the string variable is: " << &Brain << "\n"
		<< "The memory address held by stringPTR is:      " << stringPTR << "\n"
		<< "The memory address held by stringREF is:      " << &stringREF << std::endl;

	std::cout << YELLOW << "\n------------------------------------\n" << RESET

		<< "\nThe value of the string variable is:  " << Brain << "\n"
		<< "The value pointed to by stringPTR is: " << *stringPTR << "\n"
		<< "The value pointed to by stringREF is: " << stringREF << std::endl;
	return (0);
}