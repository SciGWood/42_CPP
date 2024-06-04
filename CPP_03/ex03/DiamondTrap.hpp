#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class DiamondTrap : public ClapTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
};

#endif