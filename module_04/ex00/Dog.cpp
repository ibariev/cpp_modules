#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "The Dog was created by default constructor\n";
}

Dog::~Dog()
{
	std::cout << "The Dog was killed by destructor\n";
}

Dog::Dog(const Dog & other) : Animal()
{
	this->type = other.type;
	std::cout << "The Dog was created by copy constructor\n";
}

const Dog & Dog::operator=(const Dog & other)
{
	this->type = other.type;
	std::cout << "Assignation operator called for the Dog\n";
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof, woof..." << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}