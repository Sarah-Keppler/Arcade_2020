##
## Arcade
## Sarah-Keppler
##

CC		=	g++

RM		=	rm -f

PATH_ARCADE	=	./Core/
PATH_GRAPH	=	./GraphLib/
PATH_GAME	=	./Games/

all:	core graphicals games

core:
	make -C $(PATH_ARCADE)
	cp $(PATH_ARCADE)/arcade ./

graphicals:
	make -C $(PATH_GRAPH)

games:
	make -C $(PATH_GAME)

clean:
	rm -f *~ *.vgcore
	make -C $(PATH_ARCADE) clean
	make -C $(PATH_GRAPH) clean
	make -C $(PATH_GAME) clean

fclean: clean
	$(RM) *~ arcade ./lib/*.so
	make -C $(PATH_ARCADE) fclean
	make -C $(PATH_GRAPH) fclean
	make -C $(PATH_GAME) fclean

re: fclean all
	make -C $(PATH_ARCADE) re
	make -C $(PATH_GRAPH) re
	make -C $(PATH_GAME) re

.PHONY: all clean fclean re core graphicals games
