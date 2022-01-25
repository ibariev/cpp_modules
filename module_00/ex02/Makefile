NAME =		GlobalBanksters

SRCS =		tests.cpp	Account.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADER =	Account.hpp

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