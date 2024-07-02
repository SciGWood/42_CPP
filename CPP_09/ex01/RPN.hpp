#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <stack>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

class	RPN
{
	private:
		std::stack<int>	Pile;
	public:
		RPN();//								Default Constructor
		RPN(const RPN &other);//				Copy constructor
		RPN&	operator=(const RPN &other);//	Copy assignement operator
		~RPN();//								Destructor

		void	doOp(std::string input);
};