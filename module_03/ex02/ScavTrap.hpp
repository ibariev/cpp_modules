#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const ScavTrap & other);
		ScavTrap(std::string name);
		const ScavTrap & operator=(const ScavTrap & other);
		void attack(std::string const & target);
		void guardGate();
};

#endif