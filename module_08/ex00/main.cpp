#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <vector>
#include <set>
#include <deque>

int	main(void)
{
	int					array[5] = {1, 2, 3, 2, 5};
	std::list<int>		lst(array, array + 5);
	std::vector<int>	vct(array, array + 5);
	std::set<int>		set(array, array + 5);
	std::deque<int>		dqu(array, array + 5);

 	try
	{
		std::cout << *easyfind(lst, 3) << std::endl;
		std::cout << *easyfind(vct, 5) << std::endl;
		std::cout << *easyfind(set, 2) << std::endl;
		std::cout << *easyfind(dqu, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
