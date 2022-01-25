#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
	std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm & other);
		PresidentialPardonForm(const std::string & target);
		~PresidentialPardonForm();

		const PresidentialPardonForm & operator=(const PresidentialPardonForm & other);
		virtual void execute(Bureaucrat const & executor) const;
};

#endif