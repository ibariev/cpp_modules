#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	write_error(void);
	public:
		void	complain(std::string level);
		Karen(void);
		~Karen(void);
};

#endif