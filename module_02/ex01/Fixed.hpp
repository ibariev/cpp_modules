#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	int					value;
	static const int	fract_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &a);
		Fixed(const int a);
		Fixed(const float a);
		const Fixed	&operator=(const Fixed &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int	toInt(void) const;
		float toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &a);

#endif