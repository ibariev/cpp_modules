#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Some_animal";
	std::cout << "The Animal was created by default constructor\n";
}

Animal::~Animal()
{
	std::cout << "The Animal was killed by destructor\n";
}

Animal::Animal(const Animal & other)
{
	this->type = other.type;
	std::cout << "The Animal was created by copy constructor\n";
}

const Animal & Animal::operator=(const Animal & other)
{
	this->type = other.type;
	std::cout << "Assignation operator called for the Animal\n";
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Some unknown sounds..." << std::endl;
}

std::string Animal::getType() const
{	
	return (this->type);
}