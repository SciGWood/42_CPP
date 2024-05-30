#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					RawBits;//				Fixed point position starting at 0
		static const int	fraction = 8;//			Number width int bits, here is 8 bits.
	public:
		Fixed();//									Default constructor
		Fixed(const Fixed &newNumber);//			Copy constructor
		Fixed& operator=(const Fixed &newNumber);//	Copy assignement operator
		~Fixed();//									Destructor
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif