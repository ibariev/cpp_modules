#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double"
				"-cheese-triple-pickle-special-ketchup burger.\n"
				"I just love it!" << std::endl;
	std::cout << std::endl;
}
void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more"
				" money.\nYou don't put enough! If you did I would"
				" not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for"
				" free.\nI've been coming here for years and you"
				" just started working here last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the"
				" manager now." << std::endl;
	std::cout << std::endl;
}

void	Karen::write_error(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string	array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*ptr[5])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::write_error};
	int			i;

	i = 0;
	while (i < 4 && level != array[i])
		i++;
	switch (i)
	{
		case 0:
			(this->*ptr[0])();
		case 1:
			(this->*ptr[1])();
		case 2:
			(this->*ptr[2])();
		case 3:
			(this->*ptr[3])();
			break ;
		default:
			(this->*ptr[4])();
	}
}