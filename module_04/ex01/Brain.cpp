#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "The Brain was created by default constructor\n";
}

Brain::~Brain()
{
	std::cout << "The Brain was killed by destructor\n";
}

Brain::Brain(const Brain & other)
{
	for (int i = 0; i < SIZE; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "The Brain was created by copy constructor\n";
}

const Brain & Brain::operator=(const Brain & other)
{
	for (int i = 0; i < SIZE; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Assignation operator called for the Brain\n";
	return (*this);
}