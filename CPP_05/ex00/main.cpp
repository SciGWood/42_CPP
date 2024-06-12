/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:51:27 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/12 11:16:37 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "Want to Create \"Gus\":" << std::endl;
		Bureaucrat	Gus("Gustave", 152);
		std::cout << RED << Gus << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << "\n\n";
	}
	
	try
	{
		std::cout << "Want to Create \"Bob\":" << std::endl;
		Bureaucrat	Bob("Robert", 148);
		std::cout << GREEN << Bob << RESET << '\n' << std::endl;
		std::cout << "Want to Create \"Gigi\":" << std::endl;
		Bureaucrat	Gigi("Gisele", 48);
		std::cout << YELLOW << Gigi << RESET << '\n' << std::endl;
	
		std::cout << "Want to DownGrade --> " << Bob.getName() << ":" << std::endl;
		Bob.downGrade();
		std::cout << GREEN << Bob << RESET << '\n' << std::endl;

		std::cout << "Want to UpGrade --> " << Gigi.getName() << ":" << std::endl;
		Gigi.upGrade();
		std::cout << YELLOW << Gigi << RESET << '\n' << std::endl;
		
		std::cout << "Want to DownGrade --> " << Bob.getName() << ":" << std::endl;
		Bob.downGrade();
		std::cout << GREEN << Bob << RESET << '\n' << std::endl;
		
		std::cout << "Want to DownGrade --> " << Bob.getName() << ":" << std::endl;
		Bob.downGrade();
		std::cout << GREEN << Bob << RESET << '\n' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << "\n\n";
	}
	
	try
	{
		std::cout << "Want to Create \"Mimi\":" << std::endl;
		Bureaucrat	Mimi("Myriam", 2);
		std::cout << BLUE << Mimi << RESET << "\n" << std::endl;
	
		std::cout << "Want to UpGrade --> " << Mimi.getName() << ":" << std::endl;
		Mimi.upGrade();
		std::cout << BLUE << Mimi << RESET << '\n' << std::endl;
		std::cout << "Want to UpGrade --> " << Mimi.getName() << ":" << std::endl;
		Mimi.upGrade();
		std::cout << BLUE << Mimi << RESET << '\n' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << "\n";
	}
	
	return (0);
}