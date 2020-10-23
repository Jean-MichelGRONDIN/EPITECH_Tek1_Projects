##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)aleatory.c	\
		$(SRC_DIR)events.c	\
		$(SRC_DIR)initialise.c	\
		$(SRC_DIR)score_board.c	\
		$(SRC_DIR)window.c	\
		$(SRC_DIR)duck.c	\
		$(SRC_DIR)game_loop.c	\
		$(SRC_DIR)time.c	\
		$(SRC_DIR)main.c

LIB	=	-L./lib/my -lmy

INC	=	-I./include

GRAPHICS_FLAGS	=	-lcsfml-system -lcsfml-graphics -lcsfml-window

CFLAGS	=	$(GRAPHICS_FLAGS) $(LIB) $(INC) -W -Wall -Werror -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	make -sC ./lib/my clean

fclean:	clean
	rm -f $(NAME)
	make -sC ./lib/my fclean

re:	fclean all
