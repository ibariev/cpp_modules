#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		std::cout << "Usage: ./karenFilter level" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
}