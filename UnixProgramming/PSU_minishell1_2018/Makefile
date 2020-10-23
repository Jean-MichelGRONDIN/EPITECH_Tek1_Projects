##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	main.c	\
		$(SRC_DIR)minishell.c	\
		$(SRC_DIR)get_input.c	\
		$(SRC_DIR)check_setenv_obj_name_syntax.c	\
		$(SRC_DIR)cd_return_in_past.c	\
		$(SRC_DIR)do_this_str_have_slash.c	\
		$(SRC_DIR)check_is_nothing_in_the_str.c	\
		$(SRC_DIR)check_if_there_is_only_exit_allowed_chars.c	\
		$(SRC_DIR)do_there_is_a_dot.c	\
		$(SRC_DIR)check_exit_syntaxe.c	\
		$(SRC_DIR)my_exit_shell.c	\
		$(SRC_DIR)put_that_in_env.c	\
		$(SRC_DIR)try_go_in_this_path.c	\
		$(SRC_DIR)go_to_the_user_home.c	\
		$(SRC_DIR)init_path_before_launch_researsh.c	\
		$(SRC_DIR)remove_this_from_the_env.c	\
		$(SRC_DIR)copy_the_env_after_unset.c	\
		$(SRC_DIR)already_exist_or_new.c	\
		$(SRC_DIR)add_this_to_the_env.c	\
		$(SRC_DIR)do_my_command.c	\
		$(SRC_DIR)is_this_one_of_my_commands.c	\
		$(SRC_DIR)my_cd.c	\
		$(SRC_DIR)print_env.c	\
		$(SRC_DIR)my_set_env.c	\
		$(SRC_DIR)my_unset_env.c	\
		$(SRC_DIR)give_list_of_knowed_functions.c	\
		$(SRC_DIR)identify_the_input.c	\
		$(SRC_DIR)do_him_exist.c	\
		$(SRC_DIR)searsh_this_command_in_path.c	\
		$(SRC_DIR)try_to_launch_this.c	\
		$(SRC_DIR)exec_this_prog.c	\
		$(SRC_DIR)find_position_of_that_in_env.c	\
		$(SRC_DIR)copy_the_env.c	\
		$(SRC_DIR)initialise.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

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
