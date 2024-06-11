#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string	type;
	public:
		Cure();//								Default Constructor
		Cure(const Cure &other);//				Copy constructor
		Cure&	operator=(const Cure &other);//	Copy assignement operator
		~Cure();//								Destructor

		std::string const&	getType() const;
		Cure*				clone() const;
		void				use(ICharacter& target);
};

#endif