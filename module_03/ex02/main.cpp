#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap1("A");
	ScavTrap	scav1("B");
	FragTrap	frag1;
	FragTrap	frag2("C");

	frag1 = frag2;

	std::cout << std::endl;
	clap1.attack("someone");
	scav1.attack("someone");
	frag1.attack("someone");

	std::cout << std::endl;
	clap1.takeDamage(9);
	scav1.takeDamage(9);
	frag1.takeDamage(9);

	std::cout << std::endl;
	clap1.beRepaired(1);
	scav1.beRepaired(1);
	frag1.beRepaired(1);

	std::cout << std::endl;
	frag2.highFivesGuys();
	std::cout << std::endl;
}