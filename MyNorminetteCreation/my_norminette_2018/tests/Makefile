
##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## compiles all tests
##

SRC_UT	=	./

SRC_DIR	=	./../src/

SRC	=	$(SRC_DIR)my_norm.c	\
		./../lib/my/src/my_str_to_word_array_v2.c	\
		./../lib/my/src/find_nb_words_in_str_v2.c	\
		$(SRC_DIR)disp_usage.c	\
		$(SRC_DIR)check_header.c	\
		$(SRC_DIR)check_indentation.c	\
		$(SRC_DIR)check_tabulation.c	\
		$(SRC_DIR)check_limite_char_by_line.c	\
		$(SRC_DIR)get_what_that_file_contain.c	\
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
		$(SRC_DIR)file_c_norm.c	\
		$(SRC_DIR)file_h_norm.c	\
		$(SRC_DIR)check_that_file.c	\
		$(SRC_DIR)check_the_arg.c	\
		$(SRC_DIR)$(SRC_DIR)launch_the_norm_checker.c	\
		$(SRC_UT)test_add_to_list.c	\
		$(SRC_UT)test_find_nb_word_in_str_v2.c	\
		$(SRC_UT)test_my_str_to_word_array_v2.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./../include/

LIB	=	-L./../lib/my/ -lmy

LDFLAGS	=	-lcriterion -lm  $(LIB) -lgcov

EXTRA_FLAGS	=	-W -Wall -Wextra -g3

CFLAGS	=	$(INC) $(EXTRA_FLAGS) --coverage

NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
		make -sC ../lib/my/ re
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)
		rm -f vgcore.*
		rm -f *.gc*

fclean:		clean
		rm -f $(NAME)

re:	fclean all
