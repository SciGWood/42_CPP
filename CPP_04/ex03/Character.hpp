#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <cmath>
#include <string>
#include "AMateria.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class Character : public ICharacter
{
	private:
		AMateria					*inventory[4];
		const std::string			name;
	public:
		Character(std::string name);//						Default Constructor
		Character(const ICharacter &other);//				Copy constructor
		Character&	operator=(const ICharacter &other);//	Copy assignement operator

		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, Character& target);
		~Character();//	Destructor
};

#endif