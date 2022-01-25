#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap d1("Diamond");
	DiamondTrap d2(d1);

	std::cout << std::endl;
	d1.attack("someone");
	std::cout << std::endl;

	d1.whoAmI();
	std::cout << std::endl;

	d1.highFivesGuys();
	std::cout << std::endl;

	d1.guardGate();
	std::cout << std::endl;

	d1.takeDamage(2);
	std::cout << std::endl;
	
	d1.beRepaired(2);
	std::cout << std::endl;
}