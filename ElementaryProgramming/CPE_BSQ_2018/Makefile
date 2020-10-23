##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)fs_open_file.c	\
		$(SRC_DIR)load_the_map.c	\
		$(SRC_DIR)load_file_in_mem.c	\
		$(SRC_DIR)mem_alloc.c	\
		$(SRC_DIR)c_filter.c	\
		$(SRC_DIR)initialise.c	\
		$(SRC_DIR)free_functions.c	\
		main.c

LIB	=	-L./lib/my -lmy

INC	=	-I./include/

CFLAGS	=	$(LIB) $(INC) -W -Wall -Werror -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f src/*.gc*
	make -sC ./lib/my clean

fclean:	clean
	rm -f $(NAME)
	make -sC ./lib/my fclean

re:	fclean all
