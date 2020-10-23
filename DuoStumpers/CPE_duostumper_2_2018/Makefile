##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)stumper.c	\
		$(SRC_DIR)print_map.c	\
		$(SRC_DIR)nb_free_spaces_in_map.c	\
		$(SRC_DIR)check_around.c	\
		$(SRC_DIR)check_end.c	\
		$(SRC_DIR)find_four_aligned.c	\
		$(SRC_DIR)free_game.c	\
		$(SRC_DIR)load_map.c	\
		$(SRC_DIR)load_default_values.c	\
		$(SRC_DIR)game_loop.c	\
		$(SRC_DIR)get_user_input.c	\
		$(SRC_DIR)load_check_game.c	\
		$(SRC_DIR)check_args.c	\
		$(SRC_DIR)my_get_opt.c	\
		main.c

INC	=	-I./include/ -I./get_opt

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	connect4

all:	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f *.gc*
	rm -f $(SRC_DIR)*.gc*
	rm -f $(SRC_DIR)vgcore.*
	make -sC ./lib/my clean
	make -sC ./tests clean

fclean:	clean
	make -sC ./lib/my fclean
	make -sC ./tests fclean
	rm -f $(NAME)

tests_run:
		make -sC ./lib/my
		make -sC ./tests
		./tests/unit_tests

re:	fclean all
