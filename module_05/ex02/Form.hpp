#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string	name;
	bool				is_signed;
	const int			sign_grade;
	const int			exec_grade;
	public:
		Form();
		Form(const Form & other);
		Form(std::string _name, int _sign_grade, int _exec_grade);
		virtual ~Form();

		const Form & operator=(const Form & other);
		bool getStatus() const;
		std::string getName() const;
		int getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat & bur);
		virtual void execute(Bureaucrat const & executor) const = 0;

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

std::ostream & operator<<(std::ostream & stream, const Form & form);

#endif