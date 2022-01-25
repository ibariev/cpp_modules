NAME =		animal

SRCS =		main.cpp	Animal.cpp	Cat.cpp		Dog.cpp		WrongAnimal.cpp		WrongCat.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADERS =	Animal.hpp	Cat.hpp		Dog.hpp		WrongAnimal.hpp		WrongCat.hpp

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