NAME =		karen

SRCS =		main.cpp	Karen.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADERS =	Karen.hpp

CC =		g++

CFLAGS =	-Wall -Wextra -Werror

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