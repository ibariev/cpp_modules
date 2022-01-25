#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat & other);
		const WrongCat & operator=(const WrongCat & other);
		void makeSound() const;
		std::string getType() const;
};

#endif