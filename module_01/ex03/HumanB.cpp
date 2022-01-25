#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name = _name;
	arms = NULL;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	if (arms)
		std::cout << name << " attacks with his " << arms->getType() << std::endl;
	else
		std::cout << name << " cannot attack" << std::endl;
}

void	HumanB::setWeapon(Weapon &_arms)
{
	arms = &_arms;
}