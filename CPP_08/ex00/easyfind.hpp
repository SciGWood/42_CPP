#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <cstdlib>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

class NotFoundException : public std::exception
{
	public:
		const char	*what() const throw()
		{
			return (" not found in this container.");
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator	pos = std::find(container.begin(), container.end(), toFind);
	if (pos == container.end())
		throw (NotFoundException());
	return (pos);
}

#endif