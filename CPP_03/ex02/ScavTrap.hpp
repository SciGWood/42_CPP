#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

/* #include <iostream>
#include <cmath> */
#include <string>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);//					Constructor
		ScavTrap(const	ScavTrap &other);//				Copy constructor
		ScavTrap&	operator=(const	ScavTrap &other);//	Copy assignement operator
		~ScavTrap();//									Destructeur

		void	attack(const std::string& target);
		void	display_state();
		void	guardGate();
};

#endif