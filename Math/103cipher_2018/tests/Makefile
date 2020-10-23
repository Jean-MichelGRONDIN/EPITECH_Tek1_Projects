##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile to compile unit tests
##

SRC_UT	=	./

SRC_DIR	=	./../src/

SRC	=	$(SRC_UT)test_key.c	\
		$(SRC_DIR)key.c  \
		$(SRC_DIR)display.c  \
		$(SRC_DIR)initialise.c  \
		$(SRC_DIR)display_usage.c  \
		$(SRC_DIR)cipher.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./../include/

LIB	=	-L./../lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS) --coverage -lcriterion -lm

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
