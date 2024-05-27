#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class	contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		contact();
		~contact();
		void		getFirstName(std::string input);
		void		getLastName(std::string input);
		void		getNickname(std::string input);
		void		getPhoneNumber(std::string input);
		void		getDarkestSecret(std::string input);
		void		display_contact(int index);
		void		contact_details(size_t index);
		std::string	check_size(const std::string& input);
		int			check_empty(void);
};

#endif