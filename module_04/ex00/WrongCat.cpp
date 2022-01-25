#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "Cat";
	std::cout << "The Cat was created by default constructor\n";
}

WrongCat::~WrongCat()
{
	std::cout << "The Cat was killed by destructor\n";
}

WrongCat::WrongCat(const WrongCat & other) : WrongAnimal()
{
	this->type = other.type;
	std::cout << "The Cat was created by copy constructor\n";
}

const WrongCat & WrongCat::operator=(const WrongCat & other)
{
	this->type = other.type;
	std::cout << "Assignation operator called for the Cat\n";
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}