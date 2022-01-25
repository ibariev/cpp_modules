#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45)
{
	this->target = "Unknown";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other) : 
						Form(other.getName(), other.getSignGrade(), other.getExecGrade())
{
	this->target = other.target;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) : Form("robotomy request", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

const RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & other)
{
	this->target = other.target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getStatus())
		throw (std::string) "form is not signed!";
	else if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooLowException();
	std::cout << "SOME DRILLING NOISES" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "It's a falure!" << std::endl;
}