#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		std::string	type;
		Brain		*B;
	public:
		Dog();//								Default Constructor
		Dog(const Dog &other);//				Copy constructor
		Dog&	operator=(const Dog &other);//	Copy assignement operator
		virtual ~Dog();//						Destructor

		std::string	getType() const;
		void		makeSound() const;
		Brain		*getBrain() const;
};

#endif