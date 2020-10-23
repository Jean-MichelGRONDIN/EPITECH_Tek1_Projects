##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)anagram.c	\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	anagram

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
