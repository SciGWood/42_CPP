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
		~Fixed();//										Destructor
		
		Fixed(const int n);
		Fixed(const float nf);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		//Comparison operators
		bool	operator>(const Fixed &newNumber) const;
		bool	operator<(const Fixed &newNumber) const;
		bool	operator>=(const Fixed &newNumber) const;
		bool	operator<=(const Fixed &newNumber) const;
		bool	operator==(const Fixed &newNumber) const;
		bool	operator!=(const Fixed &newNumber) const;
		
		//arithmetic operators
		Fixed	operator+(const Fixed &newNumber) const;
		Fixed	operator-(const Fixed &newNumber) const;
		Fixed	operator*(const Fixed &newNumber) const;
		Fixed	operator/(const Fixed &newNumber) const;

		//incrementation et decrementation
		Fixed	operator++();//		pre-incrementation;
		Fixed	operator++(int);//	post-incrementation;
		Fixed	operator--();//		pre-incrementation;
		Fixed	operator--(int);//	post-incrementation;

		static Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream &out, const Fixed &fix);

#endif