#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include <cstdlib>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

typedef struct s_data
{
	std::string	content;
}					Data;

class Serializer
{
	private:
		Serializer();//											Default Constructor
		Serializer(const Serializer &other);//				    Copy constructor
		Serializer&	operator=(const Serializer &other);//	    Copy assignement operator
		~Serializer();//										Destructor

	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
		
};

#endif