/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:00:57 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 14:40:11 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->bag[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for(int i = 0; i < 4; i++)
	{
		if (other.bag[i])
			this->bag[i] = other.bag[i]->clone();
	}
}

MateriaSource&  MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 0; i++)
	{
		if (this->bag[i])
			delete this->bag[i];
		if (other.bag[i])
			this->bag[i] = other.bag[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (this->bag[i] && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia" << std::endl;
		return ;
	}
	this->bag[i] = m;
	std::cout << GREEN << "Materia " << (this->bag[i])->getType() << " just learned"
				<< RESET << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while (this->bag[i] && (this->bag[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->bag[i]))
	{
		std::cout << RED << "Materia " << type << " unknown\n" << RESET << std::endl;
		return (NULL);
	}
	std::cout << BLUE << "Materia " << type << " just created" << RESET << std::endl;
	return (this->bag[i]->clone());
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->bag[i])
			delete this->bag[i];
	}
}
