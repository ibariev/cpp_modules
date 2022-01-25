#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
	std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm & other);
		ShrubberyCreationForm(const std::string & target);
		~ShrubberyCreationForm();

		const ShrubberyCreationForm & operator=(const ShrubberyCreationForm & other);
		virtual void execute(Bureaucrat const & executor) const;
};

#endif