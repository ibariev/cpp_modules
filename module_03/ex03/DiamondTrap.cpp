#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(100, 50, 30, "Nameless"), FragTrap(), ScavTrap()
{
	this->Name = this->ClapTrap::Name;
	this->ClapTrap::Name += "_clap_name";
	std::cout << "DiamondTrap " << this->Name <<
				" appeared by default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(100, 50, 30, name), FragTrap(name), ScavTrap(name)
{
	this->Name = this->ClapTrap::Name;
	this->ClapTrap::Name += "_clap_name";
	std::cout << "DiamondTrap " << this->Name <<
				" appeared by string constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	this->Name = other.Name;
	std::cout << "DiamondTrap " << this->Name <<
				" appeared by copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->Name <<
				" was killed by destructor" << std::endl;
}

const DiamondTrap & DiamondTrap::operator=(const DiamondTrap & other)
{
	std::cout << "Assignation operator called for DiamondTrap " <<
				this->Name << std::endl;
	this->Name = other.Name;
	this->ClapTrap::Name = other.ClapTrap::Name;
	this->Hitpoints = other.Hitpoints;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->Name << ", ";
	std::cout << "my clapTrap name is " << this->ClapTrap::Name << std::endl;
}