#include "Fixed.hpp"

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