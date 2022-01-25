#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	std::string	name;
	Weapon		*arms;
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &_arms);
};

#endif