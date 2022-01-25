#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	Name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap & other);
		ClapTrap(std::string name);
		ClapTrap(int h, int e, int a, std::string name);
		const ClapTrap& operator=(const ClapTrap & other);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif