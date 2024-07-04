#pragma once

#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <ctime>
#include <list>
#include <vector>
#include <deque>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

/*Ford-Johnson algorithm = merge-insertion sort*/

class	PmergeMe
{
	private:
		
	public:
		PmergeMe();//								    Default Constructor
		PmergeMe(const PmergeMe &other);//				Copy constructor
		PmergeMe&	operator=(const PmergeMe &other);//	Copy assignement operator
		~PmergeMe();//								    Destructor

		void	sortPmMeVector(std::vector<int> &vector);
		void	sortPmMeDeque(std::deque<int> &deque);
};
