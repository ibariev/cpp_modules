NAME =		zombie

SRCS =		main.cpp	Zombie.cpp	newZombie.cpp	randomChump.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADER =	Zombie.hpp

CC =		g++

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER)
			$(CC) $(CFLAGS) $(OBJS) -o $@

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

re:			fclean all

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

.PHONY:		all clean fclean re
