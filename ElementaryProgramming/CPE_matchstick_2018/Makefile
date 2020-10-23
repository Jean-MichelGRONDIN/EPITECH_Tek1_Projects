##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	main.c	\
		$(SRC_DIR)matchstick.c	\
		$(SRC_DIR)game_loop.c	\
		$(SRC_DIR)print_usage.c	\
		$(SRC_DIR)find_lefted_lines.c	\
		$(SRC_DIR)find_the_line_not_empty_by_counting.c	\
		$(SRC_DIR)check_to_end_player_turn.c	\
		$(SRC_DIR)find_who_win.c	\
		$(SRC_DIR)modify_map.c	\
		$(SRC_DIR)ai_turn.c	\
		$(SRC_DIR)choose_an_aleatory_number.c	\
		$(SRC_DIR)get_input.c	\
		$(SRC_DIR)player_turn.c	\
		$(SRC_DIR)check_nb_matches.c	\
		$(SRC_DIR)check_input_matches.c	\
		$(SRC_DIR)check_input_line.c	\
		$(SRC_DIR)free_cleanly_this_string.c	\
		$(SRC_DIR)is_it_over.c	\
		$(SRC_DIR)init_input_struct.c	\
		$(SRC_DIR)say_what_game_happened_last_turn.c	\
		$(SRC_DIR)initialise.c	\
		$(SRC_DIR)print_game_board.c	\
		$(SRC_DIR)print_n_time_this_char.c	\
		$(SRC_DIR)init_nb_sticks_by_line.c	\
		$(SRC_DIR)check_args_are_integers.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

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
