#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5)
{
	this->target = "Unknown";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other) : 
						Form(other.getName(), other.getSignGrade(), other.getExecGrade())
{
	this->target = other.target;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : Form("presidential pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

const PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & other)
{
	this->target = other.target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getStatus())
		throw (std::string) "form is not signed!";
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}