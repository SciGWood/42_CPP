#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		std::string	type;
	public:
		Cat();//								Default Constructor
		Cat(const Cat &other);//				Copy constructor
		Cat&	operator=(const Cat &other);//	Copy assignement operator
		~Cat();//								Destructor

		std::string	getType() const;
		void		makeSound() const;
};

#endif