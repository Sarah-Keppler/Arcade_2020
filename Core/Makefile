##
## Arcade
## Sarah-Keppler
##

NAME	=	arcade

CC	=	g++

RM	=	rm -rf

PATH_CORE	=	./src/
CORE	=	Loader.cpp	\
		Core.cpp	\
		main.cpp

SRCS	=	$(addprefix $(PATH_CORE), $(CORE))	\
		../Error/Error.cpp

OBJS	=	 $(SRC:.cpp=.o)

CXXFLAGS += 	-Wall -Wextra -Werror -I./include/

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(CXXFLAGS) $(SRCS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) *~ vgcore.* ./include/*~ ./src/*~

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
