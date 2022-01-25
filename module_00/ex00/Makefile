NAME =		megaphone

SRC =		megaphone.cpp

OBJ =		$(SRC:.cpp=.o)

CC =		g++

CFLAGS =	-Wall -Wextra -Werror

RM =		rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $^ -o $@

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

re:			fclean all

clean:	
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

.PHONY:		all clean fclean re