#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <cmath>
#include <string>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class Brain
{
	private:
		std::string	*ideas;
	public:
		Brain();//									Default Constructor
		Brain(const Brain &other);//				Copy constructor
		Brain&	operator=(const Brain &other);//	Copy assignement operator
		~Brain();//									Destructor

		std::string	*getIdeas();
}

#endif