##
## Arcade | Game
## Sarah-Keppler
##

######### NOT TESTED #########

CC	=	g++

RM	=	rm -rf


NAME_NIBBLER	=	arcade_nibbler.so
NIBBLER		=	./src/Nibbler.cpp 	\
			./src/IGame.cpp		\
			../Error/Error.cpp
OBJ_NIBBLER	=	$(NIBBLER:.cpp=.o)

NAME_PACMAN	=	arcade_pacman.so
PACMAN		=	./src/Pacman.cpp 	\
			./src/IGame.cpp		\
			../Error/Error.cpp
OBJ_PACMAN	=	$(PACMAN:.cpp=.o)

NAME_QIX	=	arcade_qix++.so
QIX		=	./src/Qix.cpp 		\
			./src/IGame.cpp		\
			../Error/Error.cpp
OBJ_QIX		=	$(QIX:.cpp=.o)

NAME_CENTIPEDE	=	arcade_centipede.so
CENTIPEDE	=	./src/Centipede.cpp 	\
			./src/IGame.cpp		\
			../Error/Error.cpp
OBJ_CENTIPEDE	=	$(CENTIPEDE:.cpp=.o)

NAME_SOLARFOX	=	arcade_solarfox.so
SOLARFOX	=	./src/Solarfox.cpp 	\
			./src/IGame.cpp		\
			../Error/Error.cpp
OBJ_SOLARFOX	=	$(SOLARFOX:.cpp=.o)


CXXFLAGS 	+= 	-Wall -Wextra -Werror -I./include/ -fPIC

LDFLAGS		+=	-shared

all: nibbler pacman qix centipede solarfox

nibbler: $(OBJ_NIBBLER)
	@$(CC) $(CXXFLAGS) $(NIBBLER) $(LDFLAGS) -o $(NAME_NIBBLER)
	@mv $(NAME_NIBBLER) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: Nibbler\033[0;0m"

pacman: $(OBJ_PACMAN)
	@$(CC) $(CXXFLAGS) $(PACMAN) $(LDFLAGS) -o $(NAME_PACMAN)
	@mv $(NAME_PACMAN) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: Pacman\033[0;0m"

qix: $(OBJ_QIX)
	@$(CC) $(CXXFLAGS) $(QIX) $(LDFLAGS) -o $(NAME_QIX)
	@mv $(NAME_QIX) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: Qix\033[0;0m"

centipede: $(OBJ_CENTIPEDE)
	@$(CC) $(CXXFLAGS) $(CENTIPEDE) $(LDFLAGS) -o $(NAME_CENTIPEDE)
	@mv $(NAME_CENTIPEDE) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: Centipede\033[0;0m"

solarfox: $(OBJ_SOLARFOX)
	@$(CC) $(CXXFLAGS) $(SOLARFOX) $(LDFLAGS) -o $(NAME_SOLARFOX)
	@mv $(NAME_SOLARFOX) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: Solarfox\033[0;0m"

clean:
	@$(RM) *~ vgcore.* ./include/*~ ./src/*~ ./tests/*~
	@$(RM) $(OBJ_NIBBLER)
	@$(RM) $(OBJ_PACMAN)
	@$(RM) $(OBJ_QIX)
	@$(RM) $(OBJ_CENTIPEDE)
	@$(RM) $(OBJ_SOLARFOX)

fclean: clean
	@$(RM) $(NAME_NIBBLER)
	@$(RM) $(NAME_PACMAN)
	@$(RM) $(NAME_QIX)
	@$(RM) $(NAME_CENTIPEDE)
	@$(RM) $(NAME_SOLARFOX)

re: fclean all

.PHONY: all clean fclean re nibbler pacman qix centipede solarfox
