#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string	type;
	public:
		Weapon(std::string _type);
		Weapon(void);
		~Weapon(void);
		const std::string	&getType(void);
		void	setType(std::string str);
};

#endif