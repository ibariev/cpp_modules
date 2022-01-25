#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <cstdlib>

class  RobotomyRequestForm: public Form
{
	std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm & other);
		RobotomyRequestForm(const std::string & target);
		~RobotomyRequestForm();

		const RobotomyRequestForm & operator=(const RobotomyRequestForm & other);
		virtual void execute(Bureaucrat const & executor) const;
};

#endif