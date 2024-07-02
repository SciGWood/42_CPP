#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <map>

# define RESET "\033[0m"
# define BLUE "\033[94m"
# define RED "\033[91m"
# define GREEN "\033[92m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"

class BitcoinExchange
{
	private:
		std::map<std::string, float>	BtcRate;
	public:
		BitcoinExchange();//				                            Default Constructor
		BitcoinExchange(const BitcoinExchange &other);//				Copy constructor
		BitcoinExchange&	operator=(const BitcoinExchange &other);//	Copy assignement operator
		~BitcoinExchange();//						            		Destructor

		float	ft_StrToFloat(std::string str);
		int		ft_StrToInt(std::string str);
		void	displayResult(std::string filename);
		bool	validDate(std::string &date);
		bool	validValue(std::string &value);
		float	getRate(std::string &date);
};

#endif