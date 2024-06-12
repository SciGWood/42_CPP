/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:52:13 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/12 15:04:45 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, const int signGrade, const int execGrade) :
										name(name), signGrade(signGrade),
										execGrade(execGrade)
{
	this->isSigned = false;
	if (signGrade < 1 || execGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (signGrade > 150 || signGrade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), signGrade(other.signGrade),
								execGrade(other.execGrade)
{
	*this = other;
}

Form&	Form::operator=(const Form& other)
{
	if (this != &other)
		this->isSigned = other.isSigned;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->name);
}

int	Form::getSignGrade() const
{
	return (this->signGrade);
}

int	Form::getExecGrade() const
{
	return (this->execGrade);
}

int	Form::getSignedStatus() const
{
	return (this->isSigned);
}

void	Form::beSigned(const Bureaucrat &B)
{
	if (B.getGrade() > this->signGrade)
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("TooHighException");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("TooLowException");
}

Form::~Form()
{
}

std::ostream& operator<<(std::ostream &other, const Form &src)
{
	other << "Form " << src.getName() << ", signGrade " << src.getSignGrade()
			<< ", execGrade " << src.getExecGrade()
			<< ", isSigned: " << src.getSignedStatus() << ".";
	return (other);
}
