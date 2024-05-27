#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "contact.hpp"

class	phonebook
{
	private:
		contact	contact_tab[8];
		int		total_nb;
	public:
		phonebook();
		~phonebook();
		void	addContact(std::string FirstName, std::string LastName, std::string Nickname,
							std::string PhoneNumber, std::string DarkestSecret);
		void	display_contact_tab(void);
		int		display_details(std::string	indexSTR);
		int		check_digit(std::string PhoneNumber);
		int		check_first_line();
};

#endif