#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class T>
void swap (T & x, T & y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template <class T>
const T &	min(const T & x, const T & y)
{
	return (x < y ? x : y);
}

template <class T>
const T &	max(const T & x, const T & y)
{
	return (x > y ? x : y);
}

#endif