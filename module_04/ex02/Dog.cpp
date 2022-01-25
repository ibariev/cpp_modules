#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "The Dog was created by default constructor\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "The Dog was killed by destructor\n";
}

Dog::Dog(const Dog & other) : Animal()
{
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
	std::cout << "The Dog was created by copy constructor\n";
}

const Dog & Dog::operator=(const Dog & other)
{
	this->type = other.type;
	delete this->brain;
	this->brain = new Brain(*(other.brain));
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