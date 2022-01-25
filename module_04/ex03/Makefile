NAME =		materia

SRCS =		main.cpp	AMateria.cpp	Character.cpp	Cure.cpp	Ice.cpp		MateriaSource.cpp

OBJS =		$(SRCS:.cpp=.o)

HEADERS =	AMateria.hpp	Character.hpp	Cure.hpp	Ice.hpp		MateriaSource.hpp	ICharacter.hpp	IMateriaSource.hpp

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