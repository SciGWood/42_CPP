/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:46:30 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/27 14:20:13 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

phonebook::phonebook()
{
	total_nb = 0;
}

int	phonebook::display_details(std::string indexSTR)
{
	size_t				index;
	std::istringstream	iss(indexSTR);

	if (!(iss >> index) || index > 7)
	{
		std::cerr << "\nIndex not correct\n" << std::endl;
		return (1);
	}
	else if (index > (size_t)this->total_nb - 1 && this->total_nb < 8)
	{
		std::cerr << "\nNo details found at this index\n" << std::endl;
		return (1);
	}
	else
		contact_tab[index].contact_details(index);
	return (0);
}

int		phonebook::check_first_line()
{
	if (contact_tab[0].check_empty())
		return (0);
	return (1);
}

void	phonebook::display_contact_tab(void)
{
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "FirstName" << "|";
	std::cout << std::setw(10) << std::right << "LastName" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	int i = 0;
	while (i < 8)
	{
		contact_tab[i].display_contact(i);
		i++;
	}
}

void	phonebook::addContact(std::string FirstName, std::string LastName, std::string Nickname,
							std::string PhoneNumber, std::string DarkestSecret)
{
	if (this->total_nb < 8)
	{
		contact_tab[this->total_nb].getFirstName(FirstName);
		contact_tab[this->total_nb].getLastName(LastName);
		contact_tab[this->total_nb].getNickname(Nickname);
		contact_tab[this->total_nb].getPhoneNumber(PhoneNumber);
		contact_tab[this->total_nb].getDarkestSecret(DarkestSecret);
		this->total_nb++;
	}
	else
	{
		int i = this->total_nb % 8;
		contact_tab[i].getFirstName(FirstName);
		contact_tab[i].getLastName(LastName);
		contact_tab[i].getNickname(Nickname);
		contact_tab[i].getPhoneNumber(PhoneNumber);
		contact_tab[i].getDarkestSecret(DarkestSecret);
	}
}

int		phonebook::check_digit(std::string PhoneNumber)
{
	for (int i = 0; PhoneNumber[i]; i++)
	{
		if (!std::isdigit(PhoneNumber[i]))
			return (1);
	}
	return (0);
}

phonebook::~phonebook()
{
}
