#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <cmath>
#include <string>
#include "Brain.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class Dog : public Animal
{
	private:
		std::string	type;
		Brain		*B;
	public:
		Dog();//									Default Constructor
		Dog(const Dog &other);//				Copy constructor
		Dog&	operator=(const Dog &other);//	Copy assignement operator
		virtual ~Dog();//									Destructor

		virtual std::string	getType() const;
		virtual void		makeSound() const;
		Brain				*getBrain() const;
};

#endif