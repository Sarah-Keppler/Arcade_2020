##
## Arcade | Graph
## Sarah-Keppler
##

######### NOT TESTED #########

CC	=	g++

RM	=	rm -rf


NAME_NCURSES	=	arcade_ncurses.so
NCURSES		=	./src/NCurses.cpp \
			../Error/Error.cpp
OBJ_NCURSES	=	$(NCURSES:.cpp=.o)

NAME_SDL2	=	arcade_sdl2.so
SDL2		=	./src/SDL2.cpp \
			../Error/Error.cpp
OBJ_SDL2	=	$(SDL2:.cpp=.o)

NAME_NDK	=	arcade_ndk++.so
NDK		=	./src/NDK++.cpp \
			../Error/Error.cpp
OBJ_NDK		=	$(NDK:.cpp=.o)

NAME_AA-LIB	=	arcade_aalib.so
AA-LIB		=	./src/aa-lib.cpp \
			../Error/Error.cpp
OBJ_AA-LIB	=	$(AA-LIB:.cpp=.o)

NAME_LIBCACA	=	arcade_libcaca.so
LIBCACA		=	./src/Libcaca.cpp \
			../Error/Error.cpp
OBJ_LIBCACA	=	$(LIBCACA:.cpp=.o)

NAME_ALLEGRO5	=	arcade_allegro5.so
ALLEGRO5	=	./src/Allegro5.cpp \
			../Error/Error.cpp
OBJ_ALLEGRO5	=	$(ALLEGRO5:.cpp=.o)

NAME_XLIB	=	arcade_xlib.so
XLIB		=	./src/XLib.cpp \
			../Error/Error.cpp
OBJ_XLIB	=	$(XLIB:.cpp=.o)

NAME_GTK	=	arcade_gtk+.so
GTK		=	./src/GTK+.cpp \
			../Error/Error.cpp
OBJ_GTK		=	$(GTK:.cpp=.o)

NAME_SFML	=	arcade_sfml.so
SFML		=	./src/SFML.cpp \
			../Error/Error.cpp
OBJ_SFML	=	$(SFML:.cpp=.o)

NAME_IRRLICHT	=	arcade_irrlicht.so
IRRLICHT	=	./src/Irrlicht.cpp \
			../Error/Error.cpp
OBJ_IRRLICHT	=	$(IRRLICHT:.cpp=.o)

NAME_OPENGL	=	arcade_opengl.so
OPENGL		=	./src/OpenGL.cpp \
			../Error/Error.cpp
OBJ_OPENGL	=	$(OPENGL:.cpp=.o)

NAME_VULKAN	=	arcade_vulkan.so
VULKAN		=	./src/Vulkan.cpp \
			../Error/Error.cpp
OBJ_VULKAN	=	$(VULKAN:.cpp=.o)

NAME_QT5	=	arcade_qt5.so
QT5		=	./src/Qt5.cpp \
			../Error/Error.cpp
OBJ_QT5		=	$(QT5:.cpp=.o)


CXXFLAGS 	+= 	-Wall -Wextra -Werror -I./include/ -fPIC

LDFLAGS		+=	-shared

all: ncurses sdl2 ndk++ aa-lib libcaca allegro5 xlib gtk+ sfml irrlicht opengl vulkan gt5

ncurses: $(OBJ_NCURSES)
	$(CC) $(CXXFLAGS) $(NCURSES) $(LDFLAGS) -o $(NAME_NCURSES)
	mv $(NAME_NCURSES) ../lib/

sdl2: $(OBJ_SDL2)
	$(CC) $(CXXFLAGS) $(SDL2) $(LDFLAGS) -o $(NAME_SDL2)
	mv $(NAME_SDL2) ../lib/

ndk++: $(OBJ_NDK)
	$(CC) $(CXXFLAGS) $(NDK) $(LDFLAGS) -o $(NAME_NDK)
	mv $(NAME_NDK) ../lib/

aa-lib: $(OBJ_AA-LIB)
	$(CC) $(CXXFLAGS) $(AA-LIB) $(LDFLAGS) -o $(NAME_AA-LIB)
	mv $(NAME_AA-LIB) ../lib/

libcaca: $(OBJ_LIBCACA)
	$(CC) $(CXXFLAGS) $(LIBCACA) $(LDFLAGS) -o $(NAME_LIBCACA)
	mv $(NAME_LIBCACA) ../lib/

allegro5: $(OBJ_ALLEGRO5)
	$(CC) $(CXXFLAGS) $(ALLEGRO5) $(LDFLAGS) -o $(NAME_ALLEGRO5)
	mv $(NAME_ALLEGRO5) ../lib/

xlib: $(OBJ_XLIB)
	$(CC) $(CXXFLAGS) $(XLIB) $(LDFLAGS) -o $(NAME_XLIB)
	mv $(NAME_XLIB) ../lib/

gtk+: $(OBJ_GTK)
	$(CC) $(CXXFLAGS) $(GTK) $(LDFLAGS) -o $(NAME_GTK)
	mv $(NAME_GTK) ../lib/

sfml: $(OBJ_SFML)
	$(CC) $(CXXFLAGS) $(SFML) $(LDFLAGS) -o $(NAME_SFML)
	mv $(NAME_SFML) ../lib/

irrlicht: $(OBJ_IRRLICHT)
	$(CC) $(CXXFLAGS) $(IRRLICHT) $(LDFLAGS) -o $(NAME_IRRLICHT)
	mv $(NAME_IRRLICHT) ../lib/

opengl: $(OBJ_OPENGL)
	$(CC) $(CXXFLAGS) $(OPENGL) $(LDFLAGS) -o $(NAME_OPENGL)
	mv $(NAME_OPENGL) ../lib/

vulkan: $(OBJ_VULKAN)
	$(CC) $(CXXFLAGS) $(VULKAN) $(LDFLAGS) -o $(NAME_VULKAN)
	mv $(NAME_VULKAN) ../lib/

qt5: $(OBJ_QT5)
	$(CC) $(CXXFLAGS) $(QT5) $(LDFLAGS) -o $(NAME_QT5)
	mv $(NAME_QT5) ../lib/

clean:
	$(RM) *~ vgcore.* ./include/*~ ./src/*~ ./tests/*~

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re ncurses sdl2 ndk++ aa-lib libcaca allegro5 xlib gtk+ sfml irrlicht opengl vulkan gt5
