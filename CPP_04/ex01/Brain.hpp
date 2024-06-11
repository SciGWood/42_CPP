#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	private:
		std::string	*ideas;
	public:
		Brain();//									Default Constructor
		Brain(const Brain &other);//				Copy constructor
		Brain&	operator=(const Brain &other);//	Copy assignement operator
		~Brain();//									Destructor

		std::string	*getIdeas() const;
};

#endif