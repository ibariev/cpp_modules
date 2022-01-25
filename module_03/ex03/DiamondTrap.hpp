#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	std::string Name;
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap & other);
		DiamondTrap(std::string name);
		const DiamondTrap & operator=(const DiamondTrap & other);
		void attack(std::string const & target);
		void whoAmI();
};

#endif