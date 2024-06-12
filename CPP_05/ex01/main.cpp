/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:51:27 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/12 14:36:47 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
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

		Form	Rules("Rules", 47, 40);
		std::cout << BLUE << Rules << RESET << '\n' << std::endl;

		std::cout << Bob.getName() << ", could you sign " << Rules.getName()
					<< " Form, please?" << std::endl;
		Bob.signForm(Rules);

		std::cout << Gigi.getName() << ", could you sign " << Rules.getName()
					<< " Form, please?" << std::endl;
		Gigi.signForm(Rules);

		std::cout << "Want to UpGrade --> " << Gigi.getName() << ":" << std::endl;
		Gigi.upGrade();
		std::cout << YELLOW << Gigi << RESET << '\n' << std::endl;
		
		std::cout << Gigi.getName() << ", could you sign " << Rules.getName()
					<< " Form, please?" << std::endl;
		Gigi.signForm(Rules);

		std::cout << BLUE << Rules << RESET << '\n' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << "\n\n";
	}
	
	return (0);
}