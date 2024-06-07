#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <cmath>
#include <string>
#include "Brain.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class Cat : public AAnimal
{
	private:
		std::string	type;
		Brain		*B;
	public:
		Cat();//								Default Constructor
		Cat(const Cat &other);//				Copy constructor
		Cat&	operator=(const Cat &other);//	Copy assignement operator
		virtual ~Cat();//								Destructor

		virtual std::string	getType() const;
		virtual void		makeSound() const;
		Brain				*getBrain() const;
};

#endif