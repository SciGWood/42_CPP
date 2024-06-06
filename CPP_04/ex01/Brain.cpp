/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 11:14:15 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/06 15:12:56 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Eureka!";
	std::cout << "A new brain full of ideas" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::string	*other_ideas = other.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other_ideas[i] + "_stolen";
	std::cout << "A new brain full of STOLEN ideas" << std::endl;
	*this = other;
}

Brain&	Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

std::string	*Brain::getIdeas() const
{
	return (this->ideas);
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "A new brain full of ideas has been destroyed... :'(" << std::endl;
}
