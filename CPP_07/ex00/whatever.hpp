#ifndef WHATEVER_HPP
# define WHATEVER_HPP

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
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T const a, T const b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T	max(T const a, T const b)
{
	return ((a > b) ? a : b);
}

#endif