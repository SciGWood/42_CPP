#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria					*inventory[4];
		const std::string			name;
	public:
		Character(std::string name);//						Default Constructor
		Character(const Character &other);//				Copy constructor
		Character&	operator=(const Character &other);//	Copy assignement operator

		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		~Character();//										Destructor
};

#endif