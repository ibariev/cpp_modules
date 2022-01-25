#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	mike("Mike", 1);
		Bureaucrat	alex("Alex", 80);
		Bureaucrat	john("John", 150);
		//Bureaucrat	error("Error", 0);
		//Bureaucrat	error("Error", 151);

		mike.decrement();
		alex.increment();
		john.increment();
		std::cout << mike << std::endl;
		std::cout << alex << std::endl;
		std::cout << john << std::endl;
		// mike.increment();
		// mike.increment();
		// john.decrement();
		// john.decrement();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}