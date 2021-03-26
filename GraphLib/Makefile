##
## Arcade | Graph
## Sarah-Keppler
##

######### NOT TESTED #########

CC	=	g++

RM	=	rm -rf

## ========================================================================== ##
NAME_NCURSES	=	arcade_ncurses.so
NCURSES			=	./sources/NCurses.cpp 		\
					../Error/Error.cpp
OBJ_NCURSES		=	$(NCURSES:.cpp=.o)

## ========================================================================== ##
NAME_SDL2		=	arcade_sdl2.so
SDL2			=	./sources/SDL2.cpp 			\
					../Error/Error.cpp
OBJ_SDL2		=	$(SDL2:.cpp=.o)

## ========================================================================== ##
NAME_NDK		=	arcade_ndk++.so
NDK				=	./sources/NDK++.cpp 		\
					../Error/Error.cpp
OBJ_NDK			=	$(NDK:.cpp=.o)

## ========================================================================== ##
NAME_AA-LIB		=	arcade_aalib.so
AA-LIB			=	./sources/aa-lib.cpp 		\
					../Error/Error.cpp
OBJ_AA-LIB		=	$(AA-LIB:.cpp=.o)

## ========================================================================== ##
NAME_LIBCACA	=	arcade_libcaca.so
LIBCACA			=	./sources/Libcaca.cpp 		\
					../Error/Error.cpp
OBJ_LIBCACA		=	$(LIBCACA:.cpp=.o)

## ========================================================================== ##
NAME_ALLEGRO5	=	arcade_allegro5.so
ALLEGRO5		=	./sources/Allegro5.cpp 		\
					../Error/Error.cpp
OBJ_ALLEGRO5	=	$(ALLEGRO5:.cpp=.o)

## ========================================================================== ##
NAME_XLIB		=	arcade_xlib.so
XLIB			=	./sources/XLib.cpp 			\
					../Error/Error.cpp
OBJ_XLIB		=	$(XLIB:.cpp=.o)

## ========================================================================== ##
NAME_GTK		=	arcade_gtk+.so
GTK				=	./sources/GTK+.cpp 			\
					../Error/Error.cpp
OBJ_GTK			=	$(GTK:.cpp=.o)

## ========================================================================== ##
NAME_SFML		=	arcade_sfml.so
SFML			=	./sources/SFML.cpp 			\
					../Error/Error.cpp
OBJ_SFML		=	$(SFML:.cpp=.o)

## ========================================================================== ##
NAME_IRRLICHT	=	arcade_irrlicht.so
IRRLICHT		=	./sources/Irrlicht.cpp 		\
					../Error/Error.cpp
OBJ_IRRLICHT	=	$(IRRLICHT:.cpp=.o)

## ========================================================================== ##
NAME_OPENGL		=	arcade_opengl.so
OPENGL			=	./sources/OpenGL.cpp 		\
					../Error/Error.cpp
OBJ_OPENGL		=	$(OPENGL:.cpp=.o)

## ========================================================================== ##
NAME_VULKAN		=	arcade_vulkan.so
VULKAN			=	./sources/Vulkan.cpp 		\
					../Error/Error.cpp
OBJ_VULKAN		=	$(VULKAN:.cpp=.o)

## ========================================================================== ##
NAME_QT5		=	arcade_qt5.so
QT5				=	./sources/Qt5.cpp 			\
					../Error/Error.cpp
OBJ_QT5			=	$(QT5:.cpp=.o)

CXXFLAGS 	+= 	-Wall -Wextra -Werror -I./include/ -fPIC

LDFLAGS		+=	-shared

all: ncurses
# sdl2 ndk++ aa-lib libcaca allegro5 xlib gtk+ sfml irrlicht opengl vulkan gt5

ncurses: $(OBJ_NCURSES)
	@$(CC) $(CXXFLAGS) $(NCURSES) $(LDFLAGS) -o $(NAME_NCURSES)
	@mv $(NAME_NCURSES) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: NCurses\033[0;0m"

sdl2: $(OBJ_SDL2)
	@$(CC) $(CXXFLAGS) $(SDL2) $(LDFLAGS) -o $(NAME_SDL2)
	@mv $(NAME_SDL2) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: sdl2\033[0;0m"

ndk++: $(OBJ_NDK)
	@$(CC) $(CXXFLAGS) $(NDK) $(LDFLAGS) -o $(NAME_NDK)
	@mv $(NAME_NDK) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: ndk++\033[0;0m"

aa-lib: $(OBJ_AA-LIB)
	@$(CC) $(CXXFLAGS) $(AA-LIB) $(LDFLAGS) -o $(NAME_AA-LIB)
	@mv $(NAME_AA-LIB) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: aa-lib\033[0;0m"

libcaca: $(OBJ_LIBCACA)
	@$(CC) $(CXXFLAGS) $(LIBCACA) $(LDFLAGS) -o $(NAME_LIBCACA)
	@mv $(NAME_LIBCACA) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: libcaca\033[0;0m"

allegro5: $(OBJ_ALLEGRO5)
	@$(CC) $(CXXFLAGS) $(ALLEGRO5) $(LDFLAGS) -o $(NAME_ALLEGRO5)
	@mv $(NAME_ALLEGRO5) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: allegro5\033[0;0m"

xlib: $(OBJ_XLIB)
	@$(CC) $(CXXFLAGS) $(XLIB) $(LDFLAGS) -o $(NAME_XLIB)
	@mv $(NAME_XLIB) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: xlib\033[0;0m"

gtk+: $(OBJ_GTK)
	@$(CC) $(CXXFLAGS) $(GTK) $(LDFLAGS) -o $(NAME_GTK)
	@mv $(NAME_GTK) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: gtk+\033[0;0m"

sfml: $(OBJ_SFML)
	@$(CC) $(CXXFLAGS) $(SFML) $(LDFLAGS) -o $(NAME_SFML)
	@mv $(NAME_SFML) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: sfml\033[0;0m"

irrlicht: $(OBJ_IRRLICHT)
	@$(CC) $(CXXFLAGS) $(IRRLICHT) $(LDFLAGS) -o $(NAME_IRRLICHT)
	@mv $(NAME_IRRLICHT) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: irrlicht\033[0;0m"

opengl: $(OBJ_OPENGL)
	@$(CC) $(CXXFLAGS) $(OPENGL) $(LDFLAGS) -o $(NAME_OPENGL)
	@mv $(NAME_OPENGL) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: opengl\033[0;0m"

vulkan: $(OBJ_VULKAN)
	@$(CC) $(CXXFLAGS) $(VULKAN) $(LDFLAGS) -o $(NAME_VULKAN)
	@mv $(NAME_VULKAN) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: vulkan\033[0;0m"

qt5: $(OBJ_QT5)
	@$(CC) $(CXXFLAGS) $(QT5) $(LDFLAGS) -o $(NAME_QT5)
	@mv $(NAME_QT5) ../lib/
	@echo -e "\033[01;38;5;44m================Compiling: qt5\033[0;0m"

clean:
	@$(RM) *~ vgcore.* ./include/*~ ./sources/*~ ./tests/*~
	@$(RM) $(OBJ_NCURSES)
	@$(RM) $(OBJ_SDL2)
	@$(RM) $(OBJ_NDK)
	@$(RM) $(OBJ_AA-LIB)
	@$(RM) $(OBJ_LIBCACA)
	@$(RM) $(OBJ_ALLEGRO5)
	@$(RM) $(OBJ_XLIB)
	@$(RM) $(OBJ_GTK)
	@$(RM) $(OBJ_SFML)
	@$(RM) $(OBJ_IRRLICHT)
	@$(RM) $(OBJ_OPENGL)
	@$(RM) $(OBJ_VULKAN)
	@$(RM) $(OBJ_QT5)
	

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re ncurses sdl2 ndk++ aa-lib libcaca allegro5 xlib gtk+ sfml irrlicht opengl vulkan gt5
