#include <iostream>
#include "mutantstack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "size of stack: " << s.size() << " its top: " <<  s.top() << std::endl << std::endl;


	MutantStack<double> test;

	test.push(3.14);
	test.push(2.512);
	test.push(2.718);
	test.push(-5.21);
	test.push(23.27);

	const MutantStack<double> ctest(test);

	MutantStack<double>::const_reverse_iterator rit = ctest.rbegin();
	MutantStack<double>::const_reverse_iterator rite = ctest.rend();

	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		rit++;
	}

	return 0;
}