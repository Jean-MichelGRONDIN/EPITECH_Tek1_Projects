##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)my_putchar.c	\
		$(SRC_DIR)my_strlen.c

INC	=	-I./include/

CFLAGS	=	$(INC) -W -Wall -Wextra -g3 --coverage -lncurses

OBJ	=	$(SRC:.c=.o)

NAME	=	my_popup

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*

fclean:	clean
	rm -f $(NAME)

tests_run:	$(OBJ)
		make -sC ./lib/my
		make -C ./tests
		./tests/unit_tests

re:	fclean all
