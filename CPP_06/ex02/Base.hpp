#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

class Base
{
	public:
		virtual ~Base();
};

#endif