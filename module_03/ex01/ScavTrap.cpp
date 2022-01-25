#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 50, 20, "Nameless")
{
	std::cout << "ScavTrap " << this->Name << 
				" was born by default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50, 20, name)
{
	std::cout << "ScavTrap " << this->Name << 
				" was born by string constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << this->Name << 
				" was born by copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << 
				" was destroyed by destructor" << std::endl;
}

const ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
	std::cout << "Assignation operator called for ScavTrap " <<
				this->Name << std::endl;
	this->Name = other.Name;
	this->Hitpoints = other.Hitpoints;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name <<
				" have entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->Name << " strikes back " << target <<
				" and gives " << this->Attack_damage << " points of damage!\n";
}