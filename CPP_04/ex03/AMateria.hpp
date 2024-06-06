#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <cmath>
#include <string>
#include "Brain.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria(std::string const &type);//			Default Constructor
		AMateria(const AMateria &other);//				Copy constructor
		AMateria&	operator=(const AMateria &other);//	Copy assignement operator
		virtual ~AMateria() = 0;//									Destructor

		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);


};

#endif