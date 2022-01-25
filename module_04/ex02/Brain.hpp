#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#define SIZE 100

class Brain
{
	std::string ideas[SIZE];
	public:
		Brain();
		~Brain();
		Brain(const Brain & other);
		const Brain & operator=(const Brain & other);
};

#endif