NAME =		DiamondTrap

SRCS =		main.cpp	ClapTrap.cpp	ScavTrap.cpp	FragTrap.cpp	DiamondTrap.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADERS =	ClapTrap.hpp	ScavTrap.hpp	FragTrap.hpp	DiamondTrap.hpp

CC =		clang++

CFLAGS =	-Wall -Wextra -Werror -Wshadow

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