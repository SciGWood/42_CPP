#ifndef FIXED_HPP
# define FIXED_HPP

// #include <iomanip>
// #include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					RawBits;
		static const int	fraction = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float nf);
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		friend	std::ostream &operator<<(std::ostream &out, const Fixed &fix);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif