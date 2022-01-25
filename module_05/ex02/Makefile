NAME =		three_forms

SRCS =		main.cpp	Bureaucrat.cpp	Form.cpp	ShrubberyCreationForm.cpp	RobotomyRequestForm.cpp		PresidentialPardonForm.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADERS =	Bureaucrat.hpp	Form.hpp	ShrubberyCreationForm.hpp	RobotomyRequestForm.hpp		PresidentialPardonForm.hpp

CC =		clang++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -f

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

re:			fclean all

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

.PHONY:		all clean fclean re