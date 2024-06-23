#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

template <typename T>
void	print(const T &toPrint)
{
	std::cout << toPrint << std::endl;
}

template <typename T>
void	iter(T *ArrayPtr, size_t len, void(*f)(const T &))
{
	for (size_t i = 0; i < len; i++)
		f(ArrayPtr[i]);
}

#endif