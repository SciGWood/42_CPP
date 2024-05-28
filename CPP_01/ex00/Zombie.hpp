
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

class	Zombie
{
    private:
        std::string	_name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void	announce(void);
};
Zombie*	newZombie(std::string name);
void 	randomChump(std::string name);

#endif