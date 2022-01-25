NAME =		convert

SRCS =		main.cpp

OBJS =		$(SRCS:.cpp=.o)

CC =		clang++

CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

re:			fclean all

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

.PHONY:		all clean fclean re