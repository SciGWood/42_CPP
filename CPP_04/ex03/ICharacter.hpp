#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include <cmath>
#include <string>
#include "AMateria.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

/* ALL member functions of an Interface are "virtual" */

class ICharacter
{
	public:
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter& target) = 0;
		virtual 					~ICharacter() = 0;//	Destructor
};

#endif