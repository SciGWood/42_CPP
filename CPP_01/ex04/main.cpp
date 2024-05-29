/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:18:12 by gdetourn          #+#    #+#             */
/*   Updated: 2024/05/29 11:52:58 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << RED << "Parameters required : ./SedForLosers <filename> <s1> <s2>"
					<< RESET << std::endl;
		return (1);
	}
	std::ifstream	infile(argv[1]);
	if (!infile.is_open())
	{
		std::cerr << RED << "Problem to open file" << RESET << std::endl;
		return (1);
	}
	std::ofstream	outfile((std::string(argv[1]) + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << RED << "Problem to open file.replace" << RESET << std::endl;
		return (1);
	}
	std::string	content;
	std::string	to_replace = argv[2];
	std::string	newChar = argv[3];
	size_t i;
	while (std::getline(infile, content))
	{
		while ((i = content.find(to_replace)) != std::string::npos)
		{
			content.erase(i, to_replace.length());
			content.insert(i, newChar);
		}
		if (!std::cin.eof())
			outfile << content << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}