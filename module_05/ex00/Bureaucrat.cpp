#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Nameless")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : name(other.name)
{
	this->grade = other.grade;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	this->grade = _grade;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

const Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
	this->grade = other.grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::increment()
{
	if (this->grade == 1)
		throw GradeTooHighException();
	this->grade -= 1;
}

void Bureaucrat::decrement()
{
	if (this->grade == 150)
		throw GradeTooLowException();
	this->grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream & operator<<(std::ostream & stream, const Bureaucrat & bur)
{
	stream << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	return (stream);
}