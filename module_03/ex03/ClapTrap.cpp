#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->Hitpoints = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	this->Name = "Nameless";
	std::cout << "ClapTrap " << this->Name << 
				" was created by default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->Hitpoints = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	this->Name = name;
	std::cout << "ClapTrap " << this->Name << 
				" was created by string constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
	this->Hitpoints = other.Hitpoints;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	this->Name = other.Name;
	std::cout << "ClapTrap " << this->Name << 
				" was created by copy constructor" << std::endl;
}

ClapTrap::ClapTrap(int h, int e, int a, std::string name)
{
	this->Hitpoints = h;
	this->Energy_points = e;
	this->Attack_damage = a;
	this->Name = name;
	std::cout << "ClapTrap " << this->Name << 
				" was created by Int constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << 
				" was killed by destructor" << std::endl;
}

const ClapTrap& ClapTrap::operator=(const ClapTrap & other)
{
	std::cout << "Assignation operator called for ClapTrap " <<
				this->Name << std::endl;
	this->Hitpoints = other.Hitpoints;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	this->Name = other.Name;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->Name << " attacks " << target <<
				", causing " << this->Attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;
	if (this->Hitpoints > 0)
		std::cout << "ClapTrap " << this->Name << " takes damage in amount of " <<
					amount << " points!\n";
	else
	{
		std::cout << "ClapTrap " << this->Name << " died!\n";
		this->Hitpoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hitpoints > 0)
	{
		this->Hitpoints += amount;
		std::cout << "ClapTrap " << this->Name << " is repaired by " <<
					amount << " points!\n";
	}
}