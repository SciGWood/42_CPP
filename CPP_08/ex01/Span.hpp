#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

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
		std::vector<int>	_vector;
	public:
		Span(unsigned int N);//					Default Constructor
		Span(const Span &other);//				Copy constructor
		Span&	operator=(const Span &other);//	Copy assignement operator
		~Span();//								Destructor

		void	addNumber(int nb);
		void	addNumberS(unsigned int size);
		void	addRange(std::vector<int> table2);
		int		shortestSpan() const;
		int		longestSpan() const;
	
		class NoMoreSpaceException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class DistanceException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif