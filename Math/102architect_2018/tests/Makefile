##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile to compile unit tests
##

SRC_UT	=	./

SRC_DIR	=	./../src/

SRC	=	$(SRC_UT)test_create_matrix.c	\
		$(SRC_UT)test_calc.c	\
		$(SRC_UT)test_my_str_isnum.c	\
		$(SRC_DIR)calc.c	\
		$(SRC_DIR)creat_matrix.c	\
		$(SRC_DIR)create_simple_matrix.c	\
		$(SRC_DIR)display.c	\
		$(SRC_DIR)initialise_first_matrix.c     \
		$(SRC_DIR)operation.c   \
		$(SRC_DIR)check_args.c  \
		$(SRC_DIR)my_str_isnum.c  \
		$(SRC_DIR)my_strdup.c  \
		$(SRC_DIR)my_strlen.c  \
		$(SRC_DIR)my_putchar.c  \
		$(SRC_DIR)initialise.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./../include/

CFLAGS	=	$(INC) $(EXTRA_FLAGS) --coverage -lcriterion -lm

EXTRA_FLAGS	=	-W -Wall -Werror -Wextra -g3

NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f vgcore.*
		rm -f *.gc*

fclean:		clean
		rm -f $(NAME)

re:		fclean all
