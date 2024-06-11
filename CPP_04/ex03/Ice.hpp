#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string	_type;
	public:
		Ice();//								Default Constructor
		Ice(const Ice &other);//				Copy constructor
		Ice&	operator=(const Ice &other);//	Copy assignement operator
		~Ice();//								Destructor

		std::string const&	getType() const;
		Ice*				clone() const;
		void				use(ICharacter& target);
};

#endif