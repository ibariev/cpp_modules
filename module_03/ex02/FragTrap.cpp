#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100, 30, "Nameless")
{
	std::cout << "FragTrap " << this->Name <<
				" appeared by default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 30, name)
{
	std::cout << "FragTrap " << this->Name <<
				" appeared by string constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap & other) : ClapTrap(other)
{
	std::cout << "FragTrap " << this->Name <<
				" appeared by copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->Name <<
				" was eliminated by destructor" << std::endl;
}

const FragTrap & FragTrap::operator=(const FragTrap & other)
{
	std::cout << "Assignation operator called for FragTrap " <<
				this->Name << std::endl;
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->Name <<
				" says: \"High fives, guys!\"" << std::endl;
}