#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

/* virtual member function = "method"
	this makes the program to decide which method to use during the 
	execution (and not compilation) */

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();//										Default Constructor
		WrongAnimal(const WrongAnimal &other);//				Copy constructor
		WrongAnimal&	operator=(const WrongAnimal &other);//	Copy assignement operator
		virtual ~WrongAnimal();//								Destructor

		virtual std::string	getType() const;
		void				makeSound() const;
};

#endif