#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <cmath>
#include <string>
#include "Cure.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class Cure : public AMateria
{
	private:
		std::string	type;
	public:
		Cure(std::string const &type);//		Default Constructor
		Cure(const Cure &other);//				Copy constructor
		Cure&	operator=(const Cure &other);//	Copy assignement operator
		~Cure();//								Destructor

		std::string const&	getType() const;
		Cure*				clone() const;
		void				use(ICharacter& target);
};

#endif