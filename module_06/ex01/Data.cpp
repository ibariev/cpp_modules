#include "Data.hpp"

Data::Data()
{
	this->Name = "Mr. Anderson";
}

Data::Data(const Data & other)
{
	this->Name = other.Name;
}

Data::~Data()
{
	return ;
}

const Data & Data::operator=(const Data & other)
{
	this->Name = other.Name;
	return (*this);
}

const std::string & Data::getName() const
{
	return (this->Name);
}