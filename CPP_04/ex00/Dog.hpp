#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		std::string	type;
	public:
		Dog();//								Default Constructor
		Dog(const Dog &other);//				Copy constructor
		Dog&	operator=(const Dog &other);//	Copy assignement operator
		~Dog();//								Destructor

		std::string	getType() const;
		void		makeSound() const;
};

#endif