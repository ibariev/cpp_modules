#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->memory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i])
			delete this->memory[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
	for (int i = 0; i < 4; i++)
		this->memory[i] = other.memory[i];
}

const MateriaSource & MateriaSource::operator=(const MateriaSource & other)
{
	for (int i = 0; i < 4; i++)
		this->memory[i] = other.memory[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i] == NULL)
		{	
			this->memory[i] = m;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{	
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i] && this->memory[i]->getType() == type)
			return (this->memory[i]->clone());
	}
	return (0);
}