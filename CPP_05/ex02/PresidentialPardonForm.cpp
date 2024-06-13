/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:09:56 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/13 10:35:01 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
						AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
						AForm(other), target(other.target)
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned == false)
		throw AForm::FormNotSigned();
	else if (executor.getGrade() > this->execGrade)
		throw AForm::GradeTooLowException();
	std::cout << BLUE << target << " has been pardoned by Zaphod Beeblebrox."
				<< RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
