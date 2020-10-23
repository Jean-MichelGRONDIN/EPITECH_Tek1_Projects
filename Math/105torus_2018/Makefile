##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)torus.c	\
		$(SRC_DIR)display_usage.c	\
		$(SRC_DIR)secant.c	\
		$(SRC_DIR)find_nb_after_coma.c	\
		$(SRC_DIR)newton.c	\
		$(SRC_DIR)solve_derivative.c	\
		$(SRC_DIR)choose_methode.c	\
		$(SRC_DIR)solve_equation.c	\
		$(SRC_DIR)bisection.c	\
		$(SRC_DIR)init_args.c	\
		$(SRC_DIR)initialise.c	\
		$(SRC_DIR)check_that_all_args_are_integers.c	\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS) -lm

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	105torus

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
