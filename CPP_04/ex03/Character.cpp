/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:28:03 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/11 14:33:13 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(const Character &other) : name(other.getName() + "_copy")
{
	for(int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	}
	std::cout << "Character " << name << " has been created from " << other.name << std::endl;
}

Character&	Character::operator=(const Character &other)
{
	for (int i = 0; i < 0; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	}
	return (*this);
}

void	Character::equip(AMateria* m)
{
	int i = 0;
	if (!m)
		return ;// Does nothing but does not create bugs;
	while ((this->inventory[i] != 0 && i < 4))
		i++;
	if (i >= 4)
		return ;// Does nothing but does not create bugs;
	(this->inventory[i]) = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	else if (!(this->inventory)[idx])
		std::cout << "Nothing at this slot" << std::endl;
	else
	{
		AMateria	*ptr = (this->inventory)[idx];
		std::cout << this->name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
		(this->inventory[idx]) = 0;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->inventory)[idx])
	{
		std::cout << "No Materia to use at this index" << std::endl;
		return ;
	}
	this->inventory[idx]->use(target);
}

std::string const	&Character::getName() const
{
	return (this->name);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}
