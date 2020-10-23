##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)intersection.c	\
		$(SRC_DIR)display_usage.c	\
		$(SRC_DIR)do_the_shape.c	\
		$(SRC_DIR)shapes.c	\
		$(SRC_DIR)turn_args_to_doubles.c	\
		$(SRC_DIR)initialise_struct_var.c	\
		$(SRC_DIR)display_result.c	\
		$(SRC_DIR)calc_intersection.c	\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS) -lm

EXTRA_FLAGS	=	-W -Wall -Werror -Wextra -g -g3 -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	104intersection

all:	$(OBJ)
	make -sC ./lib/my re
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f src/*.gc*
	rm -f *.gc*
	make -sC ./lib/my clean
	make -sC ./tests clean

fclean:	clean
	rm -f $(NAME)
	make -sC ./lib/my fclean
	make -sC ./tests fclean

tests_run:
		make -C ./tests
		./tests/unit_tests

re:	fclean all
