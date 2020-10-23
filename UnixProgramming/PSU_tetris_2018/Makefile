##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)tetris.c	\
		$(SRC_DIR)launch_game.c	\
		$(SRC_DIR)get_biggest_tetriminos_size.c	\
		$(SRC_DIR)remove_wrongs_tetriminos.c	\
		$(SRC_DIR)check_loaded_keys.c	\
		$(SRC_DIR)free_tetrimino_list.c	\
		$(SRC_DIR)ask_a_key_to_continue.c	\
		$(SRC_DIR)load_tetrimino_shape.c	\
		$(SRC_DIR)load_tetrimino_size_and_color.c	\
		$(SRC_DIR)load_this_tetrimino_content.c	\
		$(SRC_DIR)get_this_tetrimino_name.c	\
		$(SRC_DIR)order_tetriminos.c	\
		$(SRC_DIR)load_each_tetriminos.c	\
		$(SRC_DIR)init_tetrimino_struc.c	\
		$(SRC_DIR)add_to_list.c	\
		$(SRC_DIR)load_tetriminos.c	\
		$(SRC_DIR)find_tetriminos.c	\
		$(SRC_DIR)is_a_tetrimino.c	\
		$(SRC_DIR)load_this_tetrimino.c	\
		$(SRC_DIR)identify_and_print_that_one.c	\
		$(SRC_DIR)get_opt_args.c	\
		$(SRC_DIR)load_functions_part_two.c	\
		$(SRC_DIR)load_functions_part_one.c	\
		$(SRC_DIR)load_settings_from_args.c	\
		$(SRC_DIR)free_tetris_struc.c	\
		$(SRC_DIR)init_from_args.c	\
		$(SRC_DIR)initialise_game_vars.c	\
		$(SRC_DIR)print_debug_mode_var_part.c	\
		$(SRC_DIR)init_tetris_with_default_values.c	\
		$(SRC_DIR)print_usage.c	\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb -lncurses

OBJ	=	$(SRC:.c=.o)

NAME	=	tetris

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

.PHONY:	all	\
	re	\
	clean	\
	fclean	\
	tests_run
