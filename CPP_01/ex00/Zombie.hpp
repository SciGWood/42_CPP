
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

# define RESET = \033[0m;
# define BLUE = \033[94m;
# define RED = \033[91m;

class	Zombie
{
    private:
        std::string	_name;
    public:
        Zombie(/* args */);
        ~Zombie();
        void	announce(void);
};
Zombie*	newZombie(std::string name);
void 	randomChump(std::string name);

#endif