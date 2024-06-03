#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class ClapTrap
{
	private:
		std::string	name;
		int			HitPoints;
		int			Energy;
		int			Damage;
		int			strenght;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);//				Copy constructor
		ClapTrap&	operator=(const ClapTrap &other);//	Copy assignement operator
		~ClapTrap();

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName();
		void			setStrenght(unsigned int damage);
		unsigned int	getStrenght();
		bool			check_if_dead(int amount);
		void			display_state();

};

#endif