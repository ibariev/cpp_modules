#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	const std::string	name;
	int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat & other);
		Bureaucrat(std::string _name, int _grade);
		~Bureaucrat();

		const Bureaucrat & operator=(const Bureaucrat & other);
		std::string getName() const; 
		int getGrade() const;
		void increment();
		void decrement();
		void signForm(Form & form) const;
		void executeForm(Form const & form) const;

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & stream, const Bureaucrat & bur);

#endif