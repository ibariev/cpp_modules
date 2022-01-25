#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->type = "cure";
}

Cure::~Cure()
{
	return ;
}

Cure::Cure(const Cure & other) : AMateria()
{
	this->type = other.type;
}

const Cure & Cure::operator=(const Cure & other)
{
	this->type = other.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure* clone = new Cure(*this);

	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()
				<< "'s wounds *" << std::endl;
}