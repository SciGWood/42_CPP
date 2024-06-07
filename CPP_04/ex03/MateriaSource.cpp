/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:00:57 by gdetourn          #+#    #+#             */
/*   Updated: 2024/06/07 14:12:42 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}

IMateriaSource::IMateriaSource(const IMateriaSource &other)
{
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource &other)
{
}

// virtual
void	IMateriaSource::learnMateria(AMateria*)
{
    IMateriaSource  *bag[4];
    for (int i; i < 0; i++)
    {
        if (!bag[i])
            bag[i] = &AMateria;
    }
    // AMateria *New = new AMateria;
    // New = &AMateria;
}

// virtual
AMateria*	IMateriaSource::createMateria(std::string const & type)
{
    return (New);
}

// virtual
IMateriaSource::~IMateriaSource()
{
}
