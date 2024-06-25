#ifndef SPAN_HPP
# define SPAN_HPP

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

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	vector;
	public:
		Span(unsigned int N);
		~Span();

		void	addNumber(int nb);
		void	shortestSpan() const;
		void	longestSpan() const;
		void	addOnce();
	
	class NoMoreSpaceException : public std::exception
	{
		public:
			const char	*what() const throw()
			{
				return ("No more space in this container.");
			}
	}

	class DistanceException : public std::exception
	{
		public:
			const char	*what() const throw()
			{
				return ("No distance available");
			}
	}
};

#endif