/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:49:36 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/24 15:48:19 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <string>
#include "phonebook.hpp"
#include "contact.hpp"
/* PhoneNumber only digits */
int	main()
{
	phonebook	MyBook;
	std::string	input;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

	while (1)
	{
		std::cout << "Do you want to ADD, SEARCH or EXIT?" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
		{
			while (FirstName.empty())
			{
				std::cout << "Please enter a FirstName: " << std::endl;
				std::cin >> FirstName;
			}
			while (LastName.empty())
			{
				std::cout << "Please enter a LastName: " << std::endl;
				std::cin >> LastName;
			}
			while (Nickname.empty())
			{
				std::cout << "Please enter a Nickname: " << std::endl;
				std::cin >> Nickname;
			}
			while (PhoneNumber.empty())
			{
				std::cout << "Please enter a PhoneNumber: " << std::endl;
				std::cin >> PhoneNumber;
			}
			while (DarkestSecret.empty())
			{
				std::cout << "Please enter the DarkestSecret: " << std::endl;
				std::cin >> DarkestSecret;
				std::cout << "\n";
			}
			MyBook.addContact(FirstName, LastName, Nickname, PhoneNumber, DarkestSecret);
			FirstName.clear();
			LastName.clear();
			Nickname.clear();
			PhoneNumber.clear();
			DarkestSecret.clear();
		}
		else if (input == "SEARCH")
		{
			size_t		index;
			std::string	indexSTR;
			MyBook.display_contact_tab();
			std::cout << "\nWhich contact do you want to see in details? Index :" << std::endl;
			std::cin >> indexSTR;
			std::istringstream	iss(indexSTR);
			if (!(iss >> index) || index > 7)
				std::cerr << "\nIndex not correct\n" << std::endl;
			else
				MyBook.display_details(index);
		}
		else if (!input.empty())
		{
			std::cout << "\nYou can only ADD, SEARCH or EXIT!\n" << std::endl;
			std::cout << "       Let's try again ;) !!\n\n" << std::endl;
		}
	}
	return (0);
}
