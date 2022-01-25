#include "Form.hpp"

Form::Form() : name("Nameless"), sign_grade(1), exec_grade(1)
{
	this->is_signed = false;
}

Form::Form(const Form & other) : name(other.name), sign_grade(other.sign_grade), exec_grade(other.exec_grade)
{
	this->is_signed = false;
}

Form::Form(std::string _name, int _sign_grade, int _exec_grade) : name(_name), sign_grade(_sign_grade), exec_grade(_exec_grade)
{
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	else if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	this->is_signed = false;
}

Form::~Form()
{
	return ;
}

const Form & Form::operator=(const Form & other)
{
	(void) other;
	return (*this);
}

bool Form::getStatus() const
{
	return (this->is_signed);
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getSignGrade() const
{
	return (this->sign_grade);
}

int Form::getExecGrade() const
{
	return (this->exec_grade);
}

void Form::beSigned(const Bureaucrat & bur)
{
	if (this->is_signed)
		throw (std::string) "form is already signed!";
	if (bur.getGrade() <= this->sign_grade)
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

std::ostream & operator<<(std::ostream & stream, const Form & form)
{
	stream << form.getName() << ", the grade required to sign is " << form.getSignGrade() <<
				", the grade required to execute is " << form.getExecGrade() << ", status: ";
	form.getStatus() ? stream << "signed." : stream << "unsigned.";
	return (stream);
}