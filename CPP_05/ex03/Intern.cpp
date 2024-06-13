/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:59:38 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/13 11:48:28 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	formTab[0] = "shrubbery creation";
	formTab[1] = "robotomy request";
	formTab[2] = "presidential pardon";
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern&	Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

AForm*	Intern::makeForm(std::string formName, std::string target)
{
	int	i;
	for (i = 0; i < 3; i++)
	{
		if (formTab[i] == formName)
			break;
	}
	switch (i)
	{
		case 0:
			std::cout << GREEN << "Intern creates " << formName << " Form" << RESET << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << GREEN << "Intern creates " << formName << " Form" << RESET << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << GREEN << "Intern creates " << formName << " Form" << RESET << std::endl;
			return (new PresidentialPardonForm(target));	
		default:
			throw Intern::NoSuchFile();
			break;
	}
	return (NULL);
}

const char *Intern::NoSuchFile::what() const throw()
{
	return ("This kind of Form doesn't exist");
}

Intern::~Intern()
{
}
