#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		delete j;//should not create a leak
		delete i;
		std::cout << std::endl << std::endl;
	}
	{
		Animal* array[4];
		int		i;

		for (i = 0; i < 2; i++)
			array[i] = new Cat();
		for (i = 2; i < 4; i++)
			array[i] = new Dog();

		for (i = 0; i < 4; i++)
			array[i]->makeSound();

		for (i = 0; i < 4; i++)
			delete array[i];
	}
}