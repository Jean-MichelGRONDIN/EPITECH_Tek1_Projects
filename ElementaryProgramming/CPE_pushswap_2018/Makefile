##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)bubble_sort.c	\
		$(SRC_DIR)rotate_left.c	\
		$(SRC_DIR)swap.c	\
		$(SRC_DIR)rotate_right.c

LIB	=	-L./lib/my -lmy

INC	=	-I./include

CFLAGS	=	$(LIB) $(INC) -W -Wall -Werror -Wextra -g3

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all:	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	make -sC ./lib/my clean
	make -sC ./tests clean

fclean:	clean
	rm -f $(NAME)
	make -sC ./lib/my fclean
	make -sC ./tests fclean

tests_run:	$(OBJ)
		make -sC ./lib/my
		make -C ./tests
		./tests/unit_tests

save:
	cp -r ./src ../save_$(NAME)/
	cp -r ./include ../save_$(NAME)/
	cp -r ./tests ../save_$(NAME)/

re:	fclean all
