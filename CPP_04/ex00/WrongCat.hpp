#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	type;
	public:
		WrongCat();//									Default Constructor
		WrongCat(const WrongCat &other);//				Copy constructor
		WrongCat&	operator=(const WrongCat &other);//	Copy assignement operator
		~WrongCat();//									Destructor

		std::string	getType() const;
		void		makeSound() const;
};

#endif