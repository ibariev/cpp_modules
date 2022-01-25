#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <class T>
void	iter(T * array, unsigned int len, void (*func)(const T & elem))
{
	unsigned int	i;

	for (i = 0; i < len; i++)
		func( array[i] );
}

template <class T>
void	print_double(const T & x)
{
	std::cout << 2 * x << std::endl;
}

#endif