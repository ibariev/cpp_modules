#include <iostream>
#include "span.hpp"

int main()
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// int	main(void)
// {
// 	std::vector<int> test;
// 	Span sp(100000);

// 	try
// 	{
// 		for (int i = 0; i < 100000; i++)
// 			test.push_back( (i - 10) * 3 + (i - 20) );
// 		sp.addRange(test.begin(), test.end());

// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }
