#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address in memory of the string:     ";
	std::cout << &string << std::endl;
	std::cout << "The same address by using stringPTR: ";
	std::cout << stringPTR << std::endl;
	std::cout << "The same address by using stringREF: ";
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << "The value of string using the pointer:   ";
	std::cout << *stringPTR << std::endl;
	std::cout << "The value of string using the reference: ";
	std::cout << stringREF << std::endl;
}