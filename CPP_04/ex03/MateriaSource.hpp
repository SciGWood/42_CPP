#ifndef MATERIASOURCE_HPP
# define MATERISOURCE_HPP

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

class IMateriaSource
{
	public:
		IMateriaSource();//											Default Constructor
		IMateriaSource(const IMateriaSource &other);//				Copy constructor
		IMateriaSource&	operator=(const IMateriaSource &other);//	Copy assignement operator

		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const & type) = 0;
		virtual				~IIMateriaSource() = 0;//				Destructor
};

#endif