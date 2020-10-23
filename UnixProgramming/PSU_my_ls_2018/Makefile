##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile of the project
##

SRC_DIR	=	./src/

SRC	=	main.c	\
		$(SRC_DIR)extract_the_directory.c	\
		$(SRC_DIR)count_nb_basic_files_for_l_arg.c	\
		$(SRC_DIR)print_all_files_names.c	\
		$(SRC_DIR)flags_finder.c	\
		$(SRC_DIR)l_arg.c	\
		$(SRC_DIR)r_uper_arg.c	\
		$(SRC_DIR)print_time_the_l_way.c	\
		$(SRC_DIR)print_with_l_disposition.c	\
		$(SRC_DIR)print_only_usual_names.c	\
		$(SRC_DIR)basic.c	\
		$(SRC_DIR)my_ls.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) -W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

all:	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	make -sC ./lib/my clean
	make -sC ./tests clean
	rm -f $(SRC_DIR)*.gc*

fclean:	clean
	make -sC ./lib/my fclean
	make -sC ./tests fclean
	rm -f $(NAME)

tests_run:
		make -sC ./lib/my
		make -sC ./tests
		./tests/unit_tests

re:	fclean all
