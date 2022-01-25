#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::Weapon(void)
{
	type = "";
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string	&Weapon::getType(void)
{
	const std::string	&ref = type;

	return (ref);
}

void	Weapon::setType(std::string str)
{
	type = str;
}