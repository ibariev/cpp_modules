#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	std::string	Name;
	public:
		Data();
		Data(const Data & other);
		~Data();

		const Data & operator=(const Data & other);
		const std::string & getName() const;
};

#endif