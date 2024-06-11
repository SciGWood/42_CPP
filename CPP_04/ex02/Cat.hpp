#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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