#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	const Dog		j;
	const Cat		i;
	//const Animal	k;

	std::cout << j.getType() << " " << std::endl;
	std::cout << i.getType() << " " << std::endl;
	//std::cout << k.getType() << " " << std::endl;
	
	j.makeSound();
	i.makeSound();
	//k.makeSound();
}