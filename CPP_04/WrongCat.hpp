#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <cmath>
#include <string>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class WrongCat : public Animal
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