#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	this->type = "ice";
}

Ice::~Ice()
{
	return ;
}

Ice::Ice(const Ice & other) : AMateria()
{
	this->type = other.type;
}

const Ice & Ice::operator=(const Ice & other)
{
	this->type = other.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	Ice* clone = new Ice(*this);

	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
				<< " *" << std::endl;
}