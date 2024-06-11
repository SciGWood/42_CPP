/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:51:27 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 17:51:07 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Bob("Robert", 148);
	Bureaucrat	Gigi("Gisele", 48);
	Bureaucrat	Mimi("Myriam", 2);
	std::cout << GREEN << Bob << RESET << std::endl;
	std::cout << YELLOW << Gigi << RESET << std::endl;
	std::cout << BLUE << Mimi << RESET << "\n" << std::endl;
	
	try
	{
		Bob.downGrade();
		std::cout << GREEN << Bob << RESET << std::endl;
		Gigi.upGrade();
		std::cout << YELLOW << Gigi << RESET << std::endl;
		Bob.downGrade();
		std::cout << GREEN << Bob << RESET << std::endl;
		Bob.downGrade();
		std::cout << GREEN << Bob << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n\n";
	}
	
	try
	{
		Mimi.upGrade();
		std::cout << BLUE << Mimi << RESET << std::endl;
		Mimi.upGrade();
		std::cout << BLUE << Mimi << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
	

	return (0);
}