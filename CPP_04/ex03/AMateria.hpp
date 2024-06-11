#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "Character.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class ICharacter;

class AMateria
{
	protected:
		const std::string	type;
	public:
		AMateria();//										Default Constructor
		AMateria(std::string const &type);
		// AMateria(const AMateria &other);//				Copy constructor
		// AMateria&	operator=(const AMateria &other);//	Copy assignement operator

		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
		virtual				~AMateria();//					Destructor
};

#endif