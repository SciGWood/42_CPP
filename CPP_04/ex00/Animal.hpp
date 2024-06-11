#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

/* virtual member function = "method"
	this makes the program to decide which method to use during the 
	execution (and not compilation) */

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();//									Default Constructor
		Animal(const Animal &other);//				Copy constructor
		Animal&	operator=(const Animal &other);//	Copy assignement operator
		virtual ~Animal();//						Destructor

		virtual std::string	getType() const;
		virtual void		makeSound() const;
};

#endif