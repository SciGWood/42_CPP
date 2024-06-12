/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:10:49 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/12 17:08:31 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
						AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :
						AForm(other), target(other.target)
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned == false)
		std::cerr << this->name << " must be signed in order to execute it!" << std::endl;
	else if (executor.getGrade() > this->execGrade)
		throw AForm::GradeTooLowException();
	std::cout << RED << "Drilling noises... ZZzhh" << std::endl;
	if (rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully!\n" << RESET << std::endl;
	else
		std::cout << "Robotomy request for " << target << " has failed.\n" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
