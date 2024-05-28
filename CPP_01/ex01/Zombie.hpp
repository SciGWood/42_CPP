
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void    setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif