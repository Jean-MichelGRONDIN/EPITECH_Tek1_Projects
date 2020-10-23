##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)runner.c	\
		$(SRC_DIR)launch_game_infinite_mode.c	\
		$(SRC_DIR)disp_usage.c	\
		$(SRC_DIR)free_clocks.c	\
		$(SRC_DIR)free_rules.c	\
		$(SRC_DIR)free_map.c	\
		$(SRC_DIR)free_ground_struct.c	\
		$(SRC_DIR)free_internal_variables.c	\
		$(SRC_DIR)free_args_from_usual.c	\
		$(SRC_DIR)init_rulers.c	\
		$(SRC_DIR)receive_event.c	\
		$(SRC_DIR)basic_game_actions.c	\
		$(SRC_DIR)destroy_musics.c	\
		$(SRC_DIR)init_musics.c	\
		$(SRC_DIR)game_loop.c	\
		$(SRC_DIR)is_it_obstacle_time.c	\
		$(SRC_DIR)alloc_2d_array_of_obstacles.c	\
		$(SRC_DIR)creat_obstacles_map.c	\
		$(SRC_DIR)check_map_conditions.c	\
		$(SRC_DIR)init_map_from_file.c	\
		$(SRC_DIR)load_map_from_file.c	\
		$(SRC_DIR)print_finale_screen.c	\
		$(SRC_DIR)final_window.c	\
		$(SRC_DIR)int_to_str.c	\
		$(SRC_DIR)display_real_time_score.c	\
		$(SRC_DIR)do_him_touch_the_obstacles.c	\
		$(SRC_DIR)spawn_and_manage_obstacles.c	\
		$(SRC_DIR)aleatory.c	\
		$(SRC_DIR)init_obstacles_stone.c	\
		$(SRC_DIR)init_obstacles_diverse.c	\
		$(SRC_DIR)initialise_all_obstacles.c	\
		$(SRC_DIR)player_animation.c	\
		$(SRC_DIR)get_time.c	\
		$(SRC_DIR)get_all_times.c	\
		$(SRC_DIR)init_this_clock.c	\
		$(SRC_DIR)user_actions.c	\
		$(SRC_DIR)game_loop_infinite.c	\
		$(SRC_DIR)init_all_clocks_infinite_mode.c	\
		$(SRC_DIR)window_action.c	\
		$(SRC_DIR)init_grounds.c	\
		$(SRC_DIR)initialise_player.c	\
		$(SRC_DIR)create_my_window.c	\
		$(SRC_DIR)initialise_all_grounds.c	\
		$(SRC_DIR)init_all_player_parts.c	\
		$(SRC_DIR)move_ground.c	\
		$(SRC_DIR)move_player.c	\
		$(SRC_DIR)move_all_grounds.c	\
		main.c

LIB	=	-L./lib/my -lmy

INC	=	-I./include

G_FLAGS	=	-lcsfml-system -lcsfml-graphics -lcsfml-window -lcsfml-audio

CFLAGS	=	$(G_FLAGS) $(LIB) $(INC) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

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
