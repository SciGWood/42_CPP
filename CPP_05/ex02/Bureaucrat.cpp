/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:51:07 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/12 17:53:41 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		this->_grade = other._grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::upGrade()
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::downGrade()
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(AForm &F)
{
	try
	{
		F.beSigned(*this);
		std::cout << GREEN << this->_name << " signed " << F.getName() << '\n'
					<< RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << this->_name << " couldn't sign " << F.getName()
					<< " Form because: \"" << e.what() << "\"\n" << RESET << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << GREEN << this->_name << " executed " << form.getName() << '\n'
					<< RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << this->_name << " was not able to execute " << form.getName()
					<< " because: \"" << e.what() << "\"\n" << RESET << std::endl;
	}
	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("TooHighException");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("TooLowException");
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream& operator<<(std::ostream &other, const Bureaucrat &src)
{
	other << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return (other);
}
