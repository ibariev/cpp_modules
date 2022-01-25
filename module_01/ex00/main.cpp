#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("Number_one");
	Zombie	*zombie2;

	zombie2 = newZombie("Number_two"); 
	zombie1.announce();
	zombie2->announce();
	randomChump("Number_three");
	delete zombie2;
}