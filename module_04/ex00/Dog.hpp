#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog & other);
		const Dog & operator=(const Dog & other);
		virtual void makeSound() const;
		virtual std::string getType() const;
};

#endif