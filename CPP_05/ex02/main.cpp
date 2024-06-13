/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:51:27 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/13 10:55:37 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		std::cout << "\t\t**** BUREAUCRAT CREATION ****\n" << std::endl;

		std::cout << "Want to Create \"Bob\":" << std::endl;
		Bureaucrat	Bob("Robert", 144);
		std::cout << GREEN << Bob << RESET << std::endl;
		std::cout << "Want to Create \"Gigi\":" << std::endl;
		Bureaucrat	Gigi("Gisele", 48);
		std::cout << YELLOW << Gigi << RESET << std::endl;
		std::cout << "Want to Create \"Fifi\":" << std::endl;
		Bureaucrat	Fifi("Filou", 6);
		std::cout << RED << Fifi << RESET << '\n' << std::endl;


		std::cout << "\t\t**** SHRUBBERY ****\n" << std::endl;

		std::cout << "Want to DownGrade --> " << Bob.getName() << ":" << std::endl;
		Bob.downGrade();
		std::cout << GREEN << Bob << RESET << '\n' << std::endl;
		ShrubberyCreationForm	Rules("Garden");
		std::cout << BLUE << Rules << RESET << '\n' << std::endl;
		std::cout << Gigi.getName() << ", could you execute " << Rules.getName()
					<< ", please?" << std::endl;
		Gigi.executeForm(Rules);
		std::cout << Bob.getName() << ", could you sign " << Rules.getName()
					<< ", please?" << std::endl;
		Bob.signForm(Rules);
		std::cout << Gigi.getName() << ", could you sign " << Rules.getName()
					<< ", please?" << std::endl;
		Gigi.signForm(Rules);
		std::cout << BLUE << Rules << RESET << '\n' << std::endl;
		std::cout << Bob.getName() << ", could you execute " << Rules.getName()
					<< ", please?" << std::endl;
		Bob.executeForm(Rules);
		std::cout << Gigi.getName() << ", could you execute " << Rules.getName()
					<< ", please?" << std::endl;
		Gigi.executeForm(Rules);


		std::cout << "\t\t**** ROBOTOMY REQUEST ****\n" << std::endl;

		RobotomyRequestForm	Pain("Jordan");
		std::cout << BLUE << Pain << RESET << '\n' << std::endl;
		std::cout << Gigi.getName() << ", could you sign " << Pain.getName()
					<< ", please?" << std::endl;
		Gigi.signForm(Pain);
		std::cout << BLUE << Pain << RESET << '\n' << std::endl;
		std::cout << Fifi.getName() << ", could you execute " << Pain.getName()
					<< ", please?" << std::endl;
		Fifi.executeForm(Pain);


		std::cout << "\t\t**** PRESIDENTIAL PARDON ****\n" << std::endl;

		PresidentialPardonForm	Pardon("Manu");
		std::cout << BLUE << Pardon << RESET << '\n' << std::endl;
		std::cout << Gigi.getName() << ", could you sign " << Pardon.getName()
					<< " Form, please?" << std::endl;
		Gigi.signForm(Pardon);
		std::cout << Fifi.getName() << ", could you sign " << Pardon.getName()
					<< " Form, please?" << std::endl;
		Fifi.signForm(Pardon);
		std::cout << BLUE << Pardon << RESET << '\n' << std::endl;
		std::cout << Fifi.getName() << ", could you execute " << Pardon.getName()
					<< ", please?" << std::endl;
		Fifi.executeForm(Pardon);
		std::cout << "Want to UpGrade --> " << Fifi.getName() << ":" << std::endl;
		Fifi.upGrade();
		std::cout << RED << Fifi << RESET << '\n' << std::endl;
		std::cout << Fifi.getName() << ", could you execute " << Pardon.getName()
					<< ", please?" << std::endl;
		Fifi.executeForm(Pardon);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << "\n\n";
	}
	
	return (0);
}