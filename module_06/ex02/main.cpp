#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int		r;
	Base	*res;
	
	srand(time(NULL));
	r = rand();
	if (r % 3 == 0)
		res = new A();
	else if (r % 3 == 1)
		res = new B();
	else
		res = new C();
	return (res);
}

void identify(Base* p)
{
	if (dynamic_cast <A *> (p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast <B *> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast <C *> (p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	A	a;
	B	b;
	C	c;
	
	try
	{
		a = dynamic_cast <A &> (p);
	}
	catch(const std::exception& e)
	{
		try
		{
			b = dynamic_cast <B &> (p);
		}
		catch(const std::exception& e)
		{
			try
			{
				c = dynamic_cast <C &> (p);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			std::cout << "C" << std::endl;
			return ;
		}
		std::cout << "B" << std::endl;
		return ;
	}
	std::cout << "A" << std::endl;
}

int	main(void)
{
	Base * test;

	test = generate();
	identify(test);
	identify(*test);
	delete test;
}