##
## EPITECH PROJECT, 2021
## Arcade_2020
## File description:
## Makefile
##

NAME	=	arcade

CC		=	g++

RM		=	rm -rf

## ========================================================================== ##
PATH_CORE			=	./sources/
CORE				=	Loader.cpp						\
						Core.cpp						\
						main.cpp

## ========================================================================== ##
PATH_ERROR			=	./../Error/
ERROR				=	Error.cpp

SRCS		=	$(addprefix $(PATH_CORE), $(CORE))		\
				$(addprefix $(PATH_ERROR), $(ERROR))

OBJS		=	 $(SRC:.cpp=.o)

CXXFLAGS	+= 	-Wall -Wextra -Werror -I./include/ -ldl

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CXXFLAGS) $(SRCS) -o $(NAME) $(LDFLAGS)
	@echo -e "\033[01;38;5;44m================Compiling: Core\033[0;0m"

clean:
	@$(RM) *~ vgcore.* ./include/*~ ./src/*~

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
