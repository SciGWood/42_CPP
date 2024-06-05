#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>
#include <iostream>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap();//									Default constructor
		DiamondTrap(std::string name);
		DiamondTrap(const	DiamondTrap &other);//				Copy constructor
		DiamondTrap&	operator=(const	DiamondTrap &other);//	Copy assignement operator
		~DiamondTrap();//									Destructor

		void	attack(const std::string& target);
		void	display_state();
		void	whoAmI();
};

#endif