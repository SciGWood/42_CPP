#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <cmath>
#include <string>
#include "AMateria.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class Ice : public AMateria
{
	private:
		std::string	type;
	public:
		Ice(std::string const &type);//			Default Constructor
		Ice(const Ice &other);//				Copy constructor
		Ice&	operator=(const Ice &other);//	Copy assignement operator
		~Ice();//								Destructor

		std::string const&	getType() const;
		AMateria*			clone() const;
		void				use(ICharacter& target);
};

#endif