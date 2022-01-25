#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

template <class T>
typename T::const_iterator	easyfind(const T & cnt, int x)
{
	typename T::const_iterator	it;

	it = std::find( cnt.begin(), cnt.end(), x );
	if ( it != cnt.end() )
		return (it);
	throw std::exception();
}

#endif