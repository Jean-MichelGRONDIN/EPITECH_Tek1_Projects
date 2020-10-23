##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)stumper.c	\
		$(SRC_DIR)count_word.c	\
		main.c

LIB	=	-L./lib/my -lmy

INC	=	-I./include

CFLAGS	=	$(LIB) $(INC) -W -Wall -Werror -Wextra -g3

OBJ	=	$(SRC:.c=.o)

NAME	=	countwords

all:	$(OBJ)
	make -sC ./lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	make -sC ./lib/my clean
#	make -sC ./tests clean

fclean:	clean
	rm -f $(NAME)
	make -sC ./lib/my fclean
#	make -sC ./tests fclean

#tests_run:
#		make -sC ./lib/my
#		make -C ./tests
#		./tests/unit_tests

re:	fclean all
