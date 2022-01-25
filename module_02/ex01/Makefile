NAME =		improved_fixed

SRCS =		main.cpp	Fixed.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADERS =	Fixed.hpp

CC =		clang++

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