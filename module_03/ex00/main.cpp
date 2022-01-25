#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	first;
	ClapTrap	second("A");
	ClapTrap	third("B");
	ClapTrap	fourth(second);

	first = third;

	first.attack("someone");
	fourth.takeDamage(3);
	third.takeDamage(15);
	fourth.beRepaired(5);
}