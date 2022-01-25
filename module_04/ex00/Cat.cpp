#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "The Cat was created by default constructor\n";
}

Cat::~Cat()
{
	std::cout << "The Cat was killed by destructor\n";
}

Cat::Cat(const Cat & other) : Animal()
{
	this->type = other.type;
	std::cout << "The Cat was created by copy constructor\n";
}

const Cat & Cat::operator=(const Cat & other)
{
	this->type = other.type;
	std::cout << "Assignation operator called for the Cat\n";
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow, meow..." << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}