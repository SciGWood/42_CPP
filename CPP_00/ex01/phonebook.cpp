/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:46:30 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/24 15:47:14 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

phonebook::phonebook()
{
	total_nb = 0;
}

phonebook::~phonebook()
{
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

void	phonebook::display_details(size_t index)
{
	if (this->total_nb < 8 && index > (size_t)this->total_nb)
	{
		std::cerr << "\nNo details found at this index\n" << std::endl;
		return ;
	}
	contact_tab[index].contact_details(index);
}
