#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	mike("Mike", 1);
		Bureaucrat	alex("Alex", 80);
		Bureaucrat	john("John", 150);
		Form*		form1 = new ShrubberyCreationForm("file");
		Form*		form2 = new RobotomyRequestForm("Work");
		Form*		form3 = new PresidentialPardonForm("Criminal");

		mike.signForm(*form1);
		mike.signForm(*form2);
		mike.signForm(*form3);

		mike.executeForm(*form3);
		alex.executeForm(*form2);
		alex.executeForm(*form1);

		delete form1;
		delete form2;
		delete form3;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}