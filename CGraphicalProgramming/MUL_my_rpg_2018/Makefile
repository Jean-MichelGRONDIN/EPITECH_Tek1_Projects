##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

IN_GAME_MENU_DIR	=	$(SRC_DIR)in_game_menu/

MENU_DIR	=	$(SRC_DIR)menu/

INVENTORY_DIR	=	$(SRC_DIR)inventory/

LOOPS_DIR	=	$(SRC_DIR)loops/

GLOB_FUNC_DIR	=	$(SRC_DIR)global_use_functions/

GAME_DIR	=	$(SRC_DIR)game_functions/

CREAT_DESTROY_DIR	=	$(SRC_DIR)creat_and_destroy_functions/

PNJ_DIR         =       $(SRC_DIR)set_pnj/

CREAT_DESTROY_DIR	=	$(SRC_DIR)/creat_and_destroy_functions/

SRC	=	$(SRC_DIR)my_rpg.c	\
		$(SRC_DIR)display_usage.c	\
		$(GLOB_FUNC_DIR)pause_and_print.c	\
		$(CREAT_DESTROY_DIR)init_in_game_menu_struc.c	\
		$(LOOPS_DIR)in_game_menu_loop.c	\
		$(MENU_DIR)menu_events.c	\
		$(MENU_DIR)init_menu_buttons.c	\
		$(MENU_DIR)menu_manage_buttons.c	\
		$(GLOB_FUNC_DIR)waiting_screen.c	\
		$(LOOPS_DIR)menu_loop.c	\
		$(GAME_DIR)overworld_portals_part_two.c	\
		$(INVENTORY_DIR)print_that_item_name.c	\
		$(INVENTORY_DIR)draw_inv_items_names_if_touched.c	\
		$(INVENTORY_DIR)inv_player_draw_and_anim.c	\
		$(INVENTORY_DIR)print_inventory_stats.c	\
		$(INVENTORY_DIR)stats_add_or_less_this_item.c	\
		$(GAME_DIR)player_stats_updater.c	\
		$(GAME_DIR)update_stats_with_this.c	\
		$(CREAT_DESTROY_DIR)init_player_stats_list.c	\
		$(INVENTORY_DIR)reset_pos_after_inventory.c	\
		$(INVENTORY_DIR)if_on_an_slot_release_it.c	\
		$(INVENTORY_DIR)if_on_an_item_grab_it.c	\
		$(INVENTORY_DIR)set_m_item_to_m_pos_and_draw_it.c	\
		$(INVENTORY_DIR)set_inventory_positions.c	\
		$(INVENTORY_DIR)draw_inv_and_slot_interaction.c	\
		$(INVENTORY_DIR)draw_inventory_items.c	\
		$(INVENTORY_DIR)inventory_mouse_management.c	\
		$(GLOB_FUNC_DIR)get_mouse_pos_with_basic_view.c	\
		$(CREAT_DESTROY_DIR)add_item_to_this_inv.c	\
		$(CREAT_DESTROY_DIR)init_items.c	\
		$(INVENTORY_DIR)interaction_mouse_slots.c	\
		$(INVENTORY_DIR)set_slots_pos_on_screen.c	\
		$(CREAT_DESTROY_DIR)init_n_empty_inv_slots.c	\
		$(CREAT_DESTROY_DIR)free_this_slot_list.c	\
		$(INVENTORY_DIR)close_inventory.c	\
		$(INVENTORY_DIR)inventory_keys_management.c	\
		$(CREAT_DESTROY_DIR)init_inventory_key_list.c	\
		$(CREAT_DESTROY_DIR)inventory_keys_list.c	\
		$(GAME_DIR)others_loops.c	\
		$(GAME_DIR)interact_with_the_key_e.c	\
		$(INVENTORY_DIR)inventory_events.c	\
		$(CREAT_DESTROY_DIR)init_inventory.c	\
		$(LOOPS_DIR)inventory_loop.c	\
		$(GAME_DIR)launch_inventory.c	\
		$(GAME_DIR)overworld_portals_part_one.c	\
		$(GAME_DIR)player_portal_management.c	\
		$(CREAT_DESTROY_DIR)init_overworld_portals.c	\
		$(CREAT_DESTROY_DIR)add_this_portal.c	\
		$(CREAT_DESTROY_DIR)key_list_part_one.c	\
		$(GAME_DIR)player_stop_walking.c	\
		$(GAME_DIR)camera_zooms.c	\
		$(GLOB_FUNC_DIR)pos_texture_col.c	\
		$(GAME_DIR)anim_player.c	\
		$(GAME_DIR)manage_player_moves.c	\
		$(GAME_DIR)player_movement.c	\
		$(CREAT_DESTROY_DIR)player_move_list.c	\
		$(CREAT_DESTROY_DIR)free_this_clock.c	\
		$(CREAT_DESTROY_DIR)free_this_texture.c	\
		$(CREAT_DESTROY_DIR)free_this_anim.c	\
		$(CREAT_DESTROY_DIR)free_player.c	\
		$(CREAT_DESTROY_DIR)free_lists.c	\
		$(CREAT_DESTROY_DIR)init_all_lists.c	\
		$(GAME_DIR)key_management.c	\
		$(CREAT_DESTROY_DIR)keys_list.c	\
		$(GAME_DIR)game_arrow_keys_management.c	\
		$(CREAT_DESTROY_DIR)init_different_rects.c	\
		$(GAME_DIR)player_management.c	\
		$(GAME_DIR)camera_movement.c	\
		$(CREAT_DESTROY_DIR)init_player.c	\
		$(CREAT_DESTROY_DIR)init_texture_struc.c	\
		$(CREAT_DESTROY_DIR)init_anim_struc.c	\
		$(CREAT_DESTROY_DIR)init_camera.c	\
		$(CREAT_DESTROY_DIR)free_maps.c					\
		$(CREAT_DESTROY_DIR)free_rpg_struc.c			\
		$(CREAT_DESTROY_DIR)init_vector_struct.c		\
		$(CREAT_DESTROY_DIR)create_my_window.c			\
		$(CREAT_DESTROY_DIR)init_all_maps.c				\
		$(GLOB_FUNC_DIR)draw_maps.c						\
		$(GLOB_FUNC_DIR)get_time.c						\
		$(GLOB_FUNC_DIR)put_in_list.c					\
		$(CREAT_DESTROY_DIR)init_rpg_struct.c			\
		$(CREAT_DESTROY_DIR)init_this_clock.c			\
		$(GAME_DIR)game_events.c						\
		$(LOOPS_DIR)game_loop.c							\
		$(CREAT_DESTROY_DIR)load_map_in_vertexarray.c	\
		$(CREAT_DESTROY_DIR)get_map_from_file.c			\
		$(LOOPS_DIR)program_loop.c						\
		$(GLOB_FUNC_DIR)window_action.c					\
		$(PNJ_DIR)entities_management.c					\
		$(PNJ_DIR)found_right_mob.c							\
		$(PNJ_DIR)set_assets.c          				\
		$(PNJ_DIR)collision_detector.c					\
		$(PNJ_DIR)detect_pnj.c							\
		$(PNJ_DIR)disp_text_interaction.c				\
		$(PNJ_DIR)disp_text_pnj.c						\
		$(PNJ_DIR)found_right_pnj.c						\
		$(PNJ_DIR)set_assets_mob.c						\
		$(CREAT_DESTROY_DIR)init_all_fight.c			\
		$(CREAT_DESTROY_DIR)init_att_button.c			\
		$(GAME_DIR)fight.c								\
		$(GAME_DIR)manage_fight.c 						\
		$(GLOB_FUNC_DIR)return_struct_sfml.c			\
		$(CREAT_DESTROY_DIR)keys_fight.c				\
		$(GAME_DIR)fight_envent.c						\
		$(GAME_DIR)arwo_fight.c							\
		$(GAME_DIR)action_fight.c						\
		$(GAME_DIR)anim_part.c							\
		$(GAME_DIR)anime_fire.c							\
		$(GAME_DIR)save_anime_fire.c					\
		$(GAME_DIR)anime_blobe.c						\
		$(GAME_DIR)anime_snak.c							\
		$(GAME_DIR)draw_fight.c							\
		$(GAME_DIR)animation_player_att.c				\
		$(GAME_DIR)init_state_fight.c					\
		$(GAME_DIR)init_state_fight_sor.c					\
		$(GAME_DIR)others_loops_next.c					\
		$(GAME_DIR)particules.c					\
		$(CREAT_DESTROY_DIR)init_parti.c				\
		$(CREAT_DESTROY_DIR)init_enm_parti.c				\
		$(CREAT_DESTROY_DIR)init_button_fight.c				\
		$(CREAT_DESTROY_DIR)set_stat_fight.c				\
		$(CREAT_DESTROY_DIR)init_pers.c				\
		$(CREAT_DESTROY_DIR)init_music.c				\
		$(PNJ_DIR)create_text_pnj.c		\
		$(PNJ_DIR)set_assets_two.c		\
		$(PNJ_DIR)found_right_chest.c		\
		$(PNJ_DIR)init_item_chest.c		\
		$(PNJ_DIR)text_for_pnj_two.c		\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy -lm

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS) $(G_FLAGS)

G_FLAGS	=	-lcsfml-system -lcsfml-graphics -lcsfml-window -lcsfml-audio

EXTRA_FLAGS	=	-W -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

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
