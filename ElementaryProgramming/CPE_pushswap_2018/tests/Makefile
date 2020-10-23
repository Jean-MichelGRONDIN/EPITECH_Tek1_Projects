##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile to compile unit tests
##

SRC_UT	=	./

SRC_DIR	=	./../src/

SRC	=	$(SRC_UT)test_bubble_sort.c	\
		$(SRC_UT)test_rotate_left.c	\
		$(SRC_UT)test_rotate_right.c	\
		$(SRC_UT)test_swap.c	\
		$(SRC_DIR)bubble_sort.c	\
		$(SRC_DIR)swap.c	\
		$(SRC_DIR)rotate_right.c	\
		$(SRC_DIR)rotate_left.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./../include/

LIB	=	-L./../lib/my/ -lmy

CFLAGS	=	$(INC) $(LIB) -W -Wall -Werror -Wextra -g3 -lcriterion --coverage

NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f *.gc*

fclean:		clean
		rm -f $(NAME)

re:		fclean all
