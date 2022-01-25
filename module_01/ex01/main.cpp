#include "Zombie.hpp"

int	main(void)
{
	Zombie	*array;

	array = zombieHorde(10, "evil_zombie");
	for (int i = 0; i < 10; i++)
		array[i].announce();
	delete [] array;
}