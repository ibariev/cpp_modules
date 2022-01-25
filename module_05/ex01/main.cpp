#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	mike("Mike", 1);
		Bureaucrat	alex("Alex", 80);
		Bureaucrat	john("John", 150);
		Form		form1("Form1", 20, 30);
		Form		form2("Form2", 100, 110);
		//Form		error("Error", 0, 10);
		//Form		error("Error", 50, 151);

		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;

		//john.signForm(form2);
		mike.signForm(form1);
		alex.signForm(form2);
		//mike.signForm(form2);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}