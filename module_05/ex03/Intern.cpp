#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(const Intern & other)
{
	(void) other;
	return ;
}

const Intern & Intern::operator=(const Intern & other)
{
	(void) other;
	return (*this);
}

Intern::~Intern()
{
	return ;
}

Form * Intern::makeForm(const std::string & name, const std::string & target)
{
	int			i;
	Form *		form;
	std::string	formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	i = 0;
	while (i < 3 && formNames[i] != name)
		i++;

	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << name << std::endl;
			return (form);
		case 1:
			form = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << name << std::endl;
			return (form);
		case 2:
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << name << std::endl;
			return (form);
		default:
			std::cerr << "The requested form is not known" << std::endl;
	}
	return (NULL);
}