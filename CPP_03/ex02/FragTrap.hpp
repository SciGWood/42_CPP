#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cmath>
#include <string>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);//					Constructor
		FragTrap(const	FragTrap &other);//				Copy constructor
		FragTrap&	operator=(const	FragTrap &other);//	Copy assignement operator
		~FragTrap();//									Destructeur

		void	attack(const std::string& target);
		void	display_state();
		void	highFivesGuys(void);
};

#endif