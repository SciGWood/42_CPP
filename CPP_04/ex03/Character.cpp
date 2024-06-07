/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:28:03 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/07 16:27:46 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(const Character &other)
{
}

Character& Character::operator=(const Character &other)
{
	for (int i = 0; i < 0; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	}
}

// virtual
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
// virtual
void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	else if (!(this->inventory)[idx])
		std::cout << "Nothing at this slot" << std::endl;
	else
	{
		AMateria	*ptr = (this->inventory)[idx];
		(this->inventory[idx]) = 0;
	}
}

// virtual
void	Character::use(int idx, Character& target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->inventory)[idx])
	
    Materia[idx];
    AMateria::use(target);
}

// virtual
std::string const	&Character::getName() const
{
    return (this->name);
}

// virtual
~Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}
