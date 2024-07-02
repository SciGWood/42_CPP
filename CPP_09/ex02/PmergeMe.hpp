#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <list>
#include <vector>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

class	PmergeMe
{
	private:
		
	public:
		PmergeMe();//								    Default Constructor
		PmergeMe(const PmergeMe &other);//				Copy constructor
		PmergeMe&	operator=(const PmergeMe &other);//	Copy assignement operator
		~PmergeMe();//								    Destructor

		void	calcRes(std::string input);
		bool	validInput(std::string input);
		void	doOp(int a, int b, char op);

		class InvalidInputException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class ZeroDivException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};
