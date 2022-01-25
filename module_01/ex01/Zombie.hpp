#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string	name;
	public:
		Zombie(std::string str);
		Zombie(void);
		~Zombie(void);
		void	rename(std::string str);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif