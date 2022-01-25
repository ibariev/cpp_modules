#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern		someRandomIntern;
		Bureaucrat	alex("Alex", 1);
		Form*		rrf;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		if (rrf)
		{
			std::cout << *rrf << std::endl;
			alex.signForm(*rrf);
			alex.executeForm(*rrf);
			delete rrf;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}