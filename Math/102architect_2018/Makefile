##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)initialise.c	\
		$(SRC_DIR)display.c	\
		$(SRC_DIR)creat_matrix.c	\
		$(SRC_DIR)calc.c	\
		$(SRC_DIR)create_simple_matrix.c	\
		$(SRC_DIR)initialise_first_matrix.c	\
		$(SRC_DIR)operation.c	\
		$(SRC_DIR)check_args.c	\
		$(SRC_DIR)my_str_isnum.c	\
		$(SRC_DIR)my_strdup.c	\
		$(SRC_DIR)my_strlen.c	\
		$(SRC_DIR)my_putchar.c	\
		main.c

INC	=	-I./include/

CFLAGS	=	$(INC) $(EXTRA_FLAGS) -lm

EXTRA_FLAGS	=	-W -Wall -Werror -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	102architect

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f src/*.gc*
	rm -f *.gc*
	make -sC ./tests clean

fclean:	clean
	rm -f $(NAME)
	make -sC ./tests fclean

tests_run:	$(OBJ)
		make -C ./tests
		./tests/unit_tests

re:	fclean all
