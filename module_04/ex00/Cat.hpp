#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat & other);
		const Cat & operator=(const Cat & other);
		virtual void makeSound() const;
		virtual std::string getType() const;
};

#endif