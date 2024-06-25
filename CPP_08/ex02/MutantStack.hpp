#pragma once

#include <iostream>
#include <stack>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};//						Default Constructor
		MutantStack(const MutantStack &other) : std::stack<T>(other) {};//				Copy constructor
		MutantStack&	operator=(const MutantStack &other)
		{
			if (this != &other)
				*this = other;
			return (*this);
		};//	Copy assignement operator
		~MutantStack() {};//										Destructor

		
};