/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:52:13 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/12 15:04:45 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string &name, const int signGrade, const int execGrade) :
										name(name), signGrade(signGrade),
										execGrade(execGrade)
{
	this->isSigned = false;
	if (signGrade < 1 || execGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (signGrade > 150 || signGrade > 150)
		throw Bureaucrat::GradeTooLowException();
}

AForm::AForm(const AForm &other) : name(other.name), signGrade(other.signGrade),
								execGrade(other.execGrade)
{
	*this = other;
}

AForm&	AForm::operator=(const AForm& other)
{
	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->name);
}

int	AForm::getSignGrade() const
{
	return (this->signGrade);
}

int	AForm::getExecGrade() const
{
	return (this->execGrade);
}

int	AForm::getSignedStatus() const
{
	return (this->isSigned);
}

void	AForm::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() > this->signGrade || this->isSigned == true)
		throw AForm::GradeTooLowException();
	else
		this->isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("TooHighException");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("TooLowException");
}

AForm::~AForm()
{
}

std::ostream& operator<<(std::ostream &other, const AForm &src)
{
	other << "AForm " << src.getName() << ", signGrade " << src.getSignGrade()
			<< ", execGrade " << src.getExecGrade()
			<< ", isSigned: " << src.getSignedStatus() << ".";
	return (other);
}
