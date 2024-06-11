#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

/* virtual member function = "method"
	this makes the program to decide which method to use during the 
	execution (and not compilation) 
	
	Abstract --> Virtual Destructor and functions = 0*/

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal();//									Default Constructor
		AAnimal(const AAnimal &other);//				Copy constructor
		AAnimal&	operator=(const AAnimal &other);//	Copy assignement operator
		virtual ~AAnimal() = 0;//						Destructor

		virtual std::string	getType() const;
		virtual void		makeSound() const = 0;// 	pure virtual "= 0"
};

#endif