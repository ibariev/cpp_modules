#include "Data.hpp"
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast <uintptr_t> (ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast <Data *> (raw));
}

int	main(void)
{
	Data		test;
	uintptr_t	raw;
	Data		*ptr;

	std::cout << &test << std::endl;
	
	raw = serialize(&test);
	std::cout << raw << std::endl << std::endl;

	ptr = deserialize(raw);
	std::cout << ptr << std::endl;
	
	std::cout << &test << std::endl;
	std::cout << ptr->getName() << std::endl;
	std::cout << test.getName() << std::endl;
}