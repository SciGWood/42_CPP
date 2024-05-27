/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:46:01 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/27 12:24:54 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

contact::contact()
{
}

void	contact::getFirstName(std::string input)
{
	this->FirstName = input;
}

void	contact::getLastName(std::string input)
{
	this->LastName = input;
}

void	contact::getNickname(std::string input)
{
	this->Nickname = input;
}

void	contact::getPhoneNumber(std::string input)
{
	this->PhoneNumber = input;
}

void	contact::getDarkestSecret(std::string input)
{
	this->DarkestSecret = input;
}

void	contact::contact_details(size_t index)
{
	std::cout << "Index: " << index << "\n";
	std::cout << "FirstName: " << FirstName << "\n";
	std::cout << "LastName: " << LastName << "\n";
	std::cout << "Nickname: " << Nickname << "\n";
	std::cout << "PhoneNumber: " << PhoneNumber << "\n";
	std::cout << "DarkestSecret : is a secret...\n" << std::endl;
}

std::string	contact::check_size(const std::string& input)
{
	std::string	short_input;

	if (input.size() < 10)
		return (input); 
	else
	{
		short_input = input.substr(0, 9) += ".";
		return (short_input);	
	}
}

void	contact::display_contact(int index)
{
	std::cout << std::setw(10) << std::right << index << "|";
	std::cout << std::setw(10) << std::right << check_size(FirstName) << "|";
	std::cout << std::setw(10) << std::right << check_size(LastName) << "|";
	std::cout << std::setw(10) << std::right << check_size(Nickname) << std::endl;
}

int		contact::check_empty(void)
{
	if (FirstName.empty())
		return (1);
	return (0);
}

contact::~contact()
{
}
