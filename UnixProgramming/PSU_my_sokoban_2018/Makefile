##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)fs_open_file.c	\
		$(SRC_DIR)load_file_in_mem.c	\
		$(SRC_DIR)alloc_tab.c	\
		$(SRC_DIR)manage_entries.c	\
		$(SRC_DIR)movements.c	\
		$(SRC_DIR)free_the_map.c	\
		$(SRC_DIR)o_position.c	\
		$(SRC_DIR)x_position.c	\
		$(SRC_DIR)is_it_lose.c	\
		$(SRC_DIR)is_it_finished.c	\
		$(SRC_DIR)is_it_win.c	\
		$(SRC_DIR)display.c	\
		$(SRC_DIR)c_filter.c	\
		$(SRC_DIR)sokoban.c	\
		$(SRC_DIR)game_loop.c	\
		$(SRC_DIR)create_window.c	\
		$(SRC_DIR)check_obj_err.c	\
		$(SRC_DIR)initialise_world.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) -W -Wall -Wextra -g3 -g -ggdb --coverage -lncurses

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	make -sC ./lib/my clean
	rm -f $(SRC_DIR)*.gc*

fclean:	clean
	make -sC ./lib/my fclean
	rm -f $(NAME)

tests_run:	$(OBJ)
		make -sC ./lib/my
		make -C ./tests
		./tests/unit_tests

re:	fclean all
