#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = a;
}

Fixed::Fixed(const int a)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = a << fract_bits;
}

Fixed::Fixed(const float a)
{
	int	multiplier;

	std::cout << "Float constructor called" << std::endl;
	multiplier = 1 << fract_bits;
	this->value = roundf(a * multiplier);
}

const Fixed	&Fixed::operator=(const Fixed &a)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = a.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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