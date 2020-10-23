##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)defender.c	\
		$(SRC_DIR)window_action.c	\
		$(SRC_DIR)disp_usage.c	\
		$(SRC_DIR)is_it_win.c	\
		$(SRC_DIR)get_price.c	\
		$(SRC_DIR)display_money.c	\
		$(SRC_DIR)init_sun_money.c	\
		$(SRC_DIR)pause_and_print_this_screen.c	\
		$(SRC_DIR)init_help_buttons.c	\
		$(SRC_DIR)garden_check_if_empty.c	\
		$(SRC_DIR)collision_detector.c	\
		$(SRC_DIR)attack_damage_management.c	\
		$(SRC_DIR)zombie_damage_management.c	\
		$(SRC_DIR)pause_menu.c	\
		$(SRC_DIR)init_menu_pause_buttons.c	\
		$(SRC_DIR)pause_menu_event.c	\
		$(SRC_DIR)init_attack.c	\
		$(SRC_DIR)init_attack_obj.c	\
		$(SRC_DIR)manage_attack.c	\
		$(SRC_DIR)init_basic_zombie.c	\
		$(SRC_DIR)init_zombies.c	\
		$(SRC_DIR)global_time_and_wave_management.c	\
		$(SRC_DIR)manage_zombie.c	\
		$(SRC_DIR)manage_struct.c	\
		$(SRC_DIR)init_this_struct.c	\
		$(SRC_DIR)init_struct_basic.c	\
		$(SRC_DIR)init_struct_basic_extended.c	\
		$(SRC_DIR)init_rules.c	\
		$(SRC_DIR)check_events.c	\
		$(SRC_DIR)free_rules.c	\
		$(SRC_DIR)toolbar_management.c	\
		$(SRC_DIR)obj_management.c	\
		$(SRC_DIR)garden_management.c	\
		$(SRC_DIR)obj_actions.c	\
		$(SRC_DIR)init_all_grounds.c	\
		$(SRC_DIR)init_all_garden_spaces.c	\
		$(SRC_DIR)add_this_garden.c	\
		$(SRC_DIR)free_this_list_elem.c	\
		$(SRC_DIR)free_all_the_list.c	\
		$(SRC_DIR)remove_that_from_list.c	\
		$(SRC_DIR)add_this_obj_to_list.c	\
		$(SRC_DIR)game_loop.c	\
		$(SRC_DIR)get_time.c	\
		$(SRC_DIR)init_this_clock.c	\
		$(SRC_DIR)free_this_obj.c	\
		$(SRC_DIR)free_this_obj_arr.c	\
		$(SRC_DIR)launcher_loop.c	\
		$(SRC_DIR)menu_window.c	\
		$(SRC_DIR)init_this_background.c	\
		$(SRC_DIR)init_logo_menu.c	\
		$(SRC_DIR)init_menu_buttons.c	\
		$(SRC_DIR)init_plant_buttons.c	\
		$(SRC_DIR)manage_button.c	\
		$(SRC_DIR)manage_plant_button.c	\
		$(SRC_DIR)menu_events.c	\
		$(SRC_DIR)waiting_screen.c	\
		$(SRC_DIR)create_my_window.c	\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS) $(G_FLAGS)

G_FLAGS	=	-lcsfml-system -lcsfml-graphics -lcsfml-window -lcsfml-audio

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	my_defender

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
