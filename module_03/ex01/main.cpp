#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap1;
	ClapTrap	clap2("A");
	ScavTrap	scav1;
	ScavTrap	scav2("B");
	ScavTrap	scav3(scav1);

	scav1 = scav2;

	std::cout << std::endl;
	clap2.attack("someone");
	scav1.attack("someone");

	std::cout << std::endl;
	clap2.takeDamage(9);
	scav1.takeDamage(9);

	std::cout << std::endl;
	clap2.beRepaired(1);
	scav1.beRepaired(1);

	std::cout << std::endl;
	scav3.guardGate();
	std::cout << std::endl;
}