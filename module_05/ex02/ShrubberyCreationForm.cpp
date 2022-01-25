#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	this->target = "Unknown";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : 
						Form(other.getName(), other.getSignGrade(), other.getExecGrade())
{
	this->target = other.target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

const ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	this->target = other.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	file;
	std::string		filename;
	
	if (!this->getStatus())
		throw (std::string) "form is not signed!";
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	
	filename = this->target + "_shrubbery";
	file.open(filename.c_str());
	if (!file)
		throw (std::string) ("Error while opening " + this->target + "_shrubbery");
	file << "       _-_\n"
		 <<"    /~~   ~~\n"
		 <<" /~~         ~~\n"
		 <<"{               }\n"
		 <<" \\  _-     -_  /\n"
		 <<"   ~  \\ //  ~\n"
		 <<"_- -   | | _- _\n"
		 <<"  _ -  | |   -_\n"
		 <<"      // \\\n";
	file.close();
}