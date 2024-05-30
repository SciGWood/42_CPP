#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					RawBits;//					Value of fixed point number.
		static const int	NbWidth = 8;//				Number width int bits, here is 8 bits.
	public:
		Fixed();//										Default constructor
		Fixed(const Fixed &newNumber);//				Copy constructor
		Fixed&	operator=(const Fixed &newNumber);//	Copy assignement operator
		friend	std::ostream &operator<<(std::ostream &out, const Fixed &fix);
		Fixed(const int n);
		Fixed(const float nf);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();//										Destructor
};

#endif