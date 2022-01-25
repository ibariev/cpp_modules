NAME =		identify

SRCS =		main.cpp	Base.cpp	A.cpp	B.cpp	C.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADERS =	Base.hpp	A.hpp	B.hpp	C.hpp

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