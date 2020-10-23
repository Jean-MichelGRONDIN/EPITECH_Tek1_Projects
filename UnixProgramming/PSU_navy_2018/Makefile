##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)navy.c	\
		$(SRC_DIR)launch_game.c	\
		$(SRC_DIR)check_user_attack.c	\
		$(SRC_DIR)init_empty_map.c	\
		$(SRC_DIR)fill_the_map_with_pos.c	\
		$(SRC_DIR)place_that_ship.c	\
		$(SRC_DIR)connect_to_enemy.c	\
		$(SRC_DIR)print_maps.c	\
		$(SRC_DIR)wait_enemy.c	\
		$(SRC_DIR)wait_an_input.c	\
		$(SRC_DIR)check_if_touched.c	\
		$(SRC_DIR)answer_the_enemy.c	\
		$(SRC_DIR)update_my_map.c	\
		$(SRC_DIR)is_this_the_end.c	\
		$(SRC_DIR)my_turn.c	\
		$(SRC_DIR)get_user_attack.c	\
		$(SRC_DIR)send_this_to_enemy.c	\
		$(SRC_DIR)update_enemy_map.c	\
		$(SRC_DIR)wait_answer.c	\
		$(SRC_DIR)check_two_time_same_ships.c	\
		$(SRC_DIR)load_map.c	\
		$(SRC_DIR)load_ships_value.c	\
		$(SRC_DIR)print_usage.c	\
		$(SRC_DIR)check_map_invalid_pos.c	\
		$(SRC_DIR)check_map_invalid_ship_number.c	\
		$(SRC_DIR)pid_errors.c	\
		$(SRC_DIR)map_errors.c	\
		$(SRC_DIR)initialise.c	\
		$(SRC_DIR)basic_sig_usr_1.c	\
		$(SRC_DIR)basic_sig_usr_2.c	\
		$(SRC_DIR)first_player/first_player.c	\
		$(SRC_DIR)first_player/game_loop_player_one.c	\
		$(SRC_DIR)first_player/connect_first_player.c	\
		$(SRC_DIR)second_player/second_player.c	\
		$(SRC_DIR)second_player/game_loop_player_two.c	\
		$(SRC_DIR)second_player/receive_connection.c	\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	navy

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
