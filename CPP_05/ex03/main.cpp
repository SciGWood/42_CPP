/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:51:27 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/13 11:55:14 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

		std::cout << "\t\t**** INTERN ****\n" << std::endl;

		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << BLUE << *rrf << RESET << '\n' << std::endl;
		std::cout << Gigi.getName() << ", could you sign " << rrf->getName()
					<< " Form, please?" << std::endl;
		Gigi.signForm(*rrf);
		std::cout << BLUE << *rrf << RESET << '\n' << std::endl;
		std::cout << Fifi.getName() << ", could you execute " << rrf->getName()
					<< ", please?" << std::endl;
		Fifi.executeForm(*rrf);
		delete rrf;
		AForm* test = someRandomIntern.makeForm("IQ test", "Joe");
		std::cout << BLUE << *test << RESET << '\n' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << "\n\n";
	}
	
	return (0);
}