#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(const Fixed &a)
{
	(*this) = a;
}

Fixed::Fixed(const int a)
{
	this->value = a << fract_bits;
}

Fixed::Fixed(const float a)
{
	int	multiplier;

	multiplier = 1 << fract_bits;
	this->value = roundf(a * multiplier);
}

const Fixed	&Fixed::operator=(const Fixed &a)
{
	this->value = a.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int	Fixed::toInt(void) const
{
	return (this->value >> fract_bits);
}

float Fixed::toFloat(void) const
{
	float	divisor;

	divisor = 1 << fract_bits;
	return (this->value / divisor);
}

std::ostream	&operator<<(std::ostream &stream, const Fixed &a)
{
	stream << a.toFloat();
	return (stream);
}

bool Fixed::operator>(const Fixed &a) const
{
	return (this->value > a.getRawBits());
}

bool Fixed::operator<(const Fixed &a) const
{
	return (this->value < a.getRawBits());
}

bool Fixed::operator>=(const Fixed &a) const
{
	return (this->value >= a.getRawBits());
}

bool Fixed::operator<=(const Fixed &a) const
{
	return (this->value <= a.getRawBits());
}

bool Fixed::operator==(const Fixed &a) const
{
	return (this->value == a.getRawBits());
}

bool Fixed::operator!=(const Fixed &a) const
{
	return (this->value != a.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &a) const
{
	Fixed	res;

	res.setRawBits(this->value + a.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &a) const
{
	Fixed	res;

	res.setRawBits(this->value - a.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &a) const
{
	Fixed	res;
	long	temp;

	temp = ((long) this->value * (long) a.getRawBits()) >> fract_bits;
	res.setRawBits(temp);
	return (res);
}

Fixed	Fixed::operator/(const Fixed &a) const
{
	Fixed	res;
	float	temp;
	int		multiplier;

	temp = (float) this->value / a.getRawBits();
	multiplier = 1 << fract_bits;
	res.setRawBits(roundf(temp * multiplier));
	return (res);
}

Fixed	&Fixed::operator++()
{
	this->value += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->value += 1;
	return (temp);
}

Fixed	&Fixed::operator--()
{
	this->value -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->value -= 1;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}