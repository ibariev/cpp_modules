#include "AMateria.hpp"

AMateria::AMateria()
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria::AMateria(const AMateria & other)
{
	this->type = other.type;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

const AMateria & AMateria::operator=(const AMateria & other)
{
	this->type = other.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
	return ;
}