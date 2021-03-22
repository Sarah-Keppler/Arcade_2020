##
## Arcade | Game
## Sarah-Keppler
##

######### NOT TESTED #########

CC	=	g++

RM	=	rm -rf


NAME_NIBBLER	=	arcade_nibbler.so
NIBBLER		=	./src/Nibbler.cpp \
			../Error/Error.cpp
OBJ_NIBBLER	=	$(NIBBLER:.cpp=.o)

NAME_PACMAN	=	arcade_pacman.so
PACMAN		=	./src/Pacman.cpp \
			../Error/Error.cpp
OBJ_PACMAN	=	$(PACMAN:.cpp=.o)

NAME_QIX	=	arcade_qix++.so
QIX		=	./src/Qix.cpp \
			../Error/Error.cpp
OBJ_QIX		=	$(QIX:.cpp=.o)

NAME_CENTIPEDE	=	arcade_centipede.so
CENTIPEDE	=	./src/Centipede.cpp \
			../Error/Error.cpp
OBJ_CENTIPEDE	=	$(CENTIPEDE:.cpp=.o)

NAME_SOLARFOX	=	arcade_solarfox.so
SOLARFOX	=	./src/Solarfox.cpp \
			../Error/Error.cpp
OBJ_SOLARFOX	=	$(SOLARFOX:.cpp=.o)


CXXFLAGS 	+= 	-Wall -Wextra -Werror -I./include/ -fPIC

LDFLAGS		+=	-shared

all: nibbler pacman qix centipede solarfox

nibbler: $(OBJ_NIBBLER)
	$(CC) $(CXXFLAGS) $(NIBBLER) $(LDFLAGS) -o $(NAME_NIBBLER)
	mv $(NAME_NIBBLER) ../lib/

pacman: $(OBJ_PACMAN)
	$(CC) $(CXXFLAGS) $(PACMAN) $(LDFLAGS) -o $(NAME_PACMAN)
	mv $(NAME_PACMAN) ../lib/

qix: $(OBJ_QIX)
	$(CC) $(CXXFLAGS) $(QIX) $(LDFLAGS) -o $(NAME_QIX)
	mv $(NAME_QIX) ../lib/

centipede: $(OBJ_CENTIPEDE)
	$(CC) $(CXXFLAGS) $(CENTIPEDE) $(LDFLAGS) -o $(NAME_CENTIPEDE)
	mv $(NAME_CENTIPEDE) ../lib/

solarfox: $(OBJ_SOLARFOX)
	$(CC) $(CXXFLAGS) $(SOLARFOX) $(LDFLAGS) -o $(NAME_SOLARFOX)
	mv $(NAME_SOLARFOX) ../lib/

clean:
	$(RM) *~ vgcore.* ./include/*~ ./src/*~ ./tests/*~

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re nibbler pacman qix centipede solarfox
