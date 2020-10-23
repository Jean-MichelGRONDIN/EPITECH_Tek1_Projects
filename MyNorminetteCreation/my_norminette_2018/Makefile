##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)my_norm.c	\
		$(SRC_DIR)disp_usage.c	\
		$(SRC_DIR)check_comment_in_headers.c	\
		$(SRC_DIR)check_comment_inside_a_function.c	\
		$(SRC_DIR)check_nb_functions_in_a_file.c	\
		$(SRC_DIR)check_functions.c	\
		$(SRC_DIR)check_while_for_if_return_space_before_bracket.c	\
		$(SRC_DIR)check_equal.c	\
		$(SRC_DIR)check_spaces_at_end_of_lines.c	\
		$(SRC_DIR)check_function_nb_lines.c	\
		$(SRC_DIR)check_comma.c	\
		$(SRC_DIR)check_header.c	\
		$(SRC_DIR)check_indentation.c	\
		$(SRC_DIR)check_tabulation.c	\
		$(SRC_DIR)check_limite_char_by_line.c	\
		$(SRC_DIR)get_what_that_file_contain.c	\
		$(SRC_DIR)file_c_norm.c	\
		$(SRC_DIR)file_h_norm.c	\
		$(SRC_DIR)check_that_file.c	\
		$(SRC_DIR)check_the_arg.c	\
		$(SRC_DIR)find_all_files.c	\
		$(SRC_DIR)is_this_an_allowed_obj.c	\
		$(SRC_DIR)check_res_of_readdir.c	\
		$(SRC_DIR)is_a_file.c	\
		$(SRC_DIR)see_if_it_is_counted.c	\
		$(SRC_DIR)find_type_of_file.c	\
		$(SRC_DIR)is_this_to_avoid.c	\
		$(SRC_DIR)give_avoided_list.c	\
		$(SRC_DIR)add_to_list.c	\
		$(SRC_DIR)initialise.c	\
		$(SRC_DIR)launch_the_norm_checker.c	\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	Normichel

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

re:	fclean all
