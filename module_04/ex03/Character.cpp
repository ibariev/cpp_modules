#include "Character.hpp"

Character::Character()
{
	this->name = "Nameless";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

Character::Character(std::string _name)
{
	this->name = _name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character & other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

const Character & Character::operator=(const Character & other)
{
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}