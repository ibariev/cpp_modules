#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern & other);
		~Intern();

		const Intern & operator=(const Intern & other);
		Form * makeForm(const std::string & name, const std::string & target);
};

#endif