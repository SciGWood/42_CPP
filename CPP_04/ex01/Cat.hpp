#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		std::string	type;
		Brain		*B;
	public:
		Cat();//								Default Constructor
		Cat(const Cat &other);//				Copy constructor
		Cat&	operator=(const Cat &other);//	Copy assignement operator
		virtual ~Cat();//						Destructor

		std::string	getType() const;
		void		makeSound() const;
		Brain		*getBrain() const;
};

#endif