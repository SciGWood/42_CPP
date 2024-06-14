#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <cstdint>
# include "Data.hpp"

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

class Serializer
{
	public:
		Serializer();//											Default Constructor
		Serializer(const Serializer &other);//				    Copy constructor
		Serializer&	operator=(const Serializer &other);//	    Copy assignement operator
		~Serializer();//										Destructor

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
		
};

#endif