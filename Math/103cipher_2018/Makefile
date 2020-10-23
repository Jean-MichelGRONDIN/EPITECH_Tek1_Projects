##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project infinadd
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)display_usage.c	\
		$(SRC_DIR)cipher.c	\
		$(SRC_DIR)initialise.c	\
		$(SRC_DIR)key.c	\
		$(SRC_DIR)msg.c	\
		$(SRC_DIR)create_empty_matrix.c	\
		$(SRC_DIR)mul_matrix.c	\
		$(SRC_DIR)create_identity_matrix.c	\
		$(SRC_DIR)reverse_key_matrix.c	\
		$(SRC_DIR)copy_key_in_res_rev.c	\
		$(SRC_DIR)init_msg_when_crypted.c	\
		$(SRC_DIR)decrypt_msg.c	\
		$(SRC_DIR)display_spaces.c	\
		$(SRC_DIR)display.c	\
		main.c

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS) -lm

EXTRA_FLAGS	=	-W -Wall -Werror -Wextra -g -g3 -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	103cipher

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

tests_run:	$(OBJ)
		make -C ./tests
		./tests/unit_tests

re:	fclean all
