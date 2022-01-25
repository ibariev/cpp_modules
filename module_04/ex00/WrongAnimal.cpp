#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Some_animal";
	std::cout << "The Animal was created by default constructor\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "The Animal was killed by destructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal & other)
{
	this->type = other.type;
	std::cout << "The Animal was created by copy constructor\n";
}

const WrongAnimal & WrongAnimal::operator=(const WrongAnimal & other)
{
	this->type = other.type;
	std::cout << "Assignation operator called for the Animal\n";
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Some unknown sounds..." << std::endl;
}