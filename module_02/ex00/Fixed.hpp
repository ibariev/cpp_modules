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
		const Fixed	&operator=(const Fixed &a);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif