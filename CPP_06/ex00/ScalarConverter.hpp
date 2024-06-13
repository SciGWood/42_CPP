#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <limits>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

class ScalarConverter
{
	private:
		static bool	isChar(const std::string &str);
		static bool	isInt(const std::string &str);
		static bool	isDouble(const std::string &str);
		static bool	isFloat(const std::string &str);

		static void	printChar(const std::string &str);
		static void	printInt(const std::string &str);
		static void	printDouble(const std::string &str);
		static void	printFloat(const std::string &str);

		ScalarConverter();//											Default Constructor
		
	public:
		ScalarConverter(const ScalarConverter &other);//				Copy constructor
		ScalarConverter&	operator=(const ScalarConverter &other);//	Copy assignement operator
		~ScalarConverter();//											Destructor

		static void	convert(const std::string &str);
};

#endif