##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile to compile unit tests
##

SRC_UT	=	./

SRC_DIR	=	./../src/

SRC	=	$(SRC_UT)test_intersection_return_value.c	\
		$(SRC_UT)test_intersection_displayed_res.c	\
		$(SRC_DIR)display_usage.c	\
		$(SRC_DIR)do_the_shape.c	\
		$(SRC_DIR)shapes.c	\
		$(SRC_DIR)turn_args_to_doubles.c	\
		$(SRC_DIR)initialise_struct_var.c	\
		$(SRC_DIR)display_result.c	\
		$(SRC_DIR)calc_intersection.c	\
		$(SRC_DIR)intersection.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./../include/

LIB	=	-L./../lib/my -lmy

LDFLAGS = 	 -lcriterion -lm  $(LIB) -lgcov

EXTRA_FLAGS	=	-W -Wall -Werror -Wextra -g3

CFLAGS	=	$(INC) $(EXTRA_FLAGS) --coverage

NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
		make -sC ../lib/my/ re
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)
		rm -f vgcore.*
		rm -f *.gc*

fclean:		clean
		rm -f $(NAME)

re:		fclean all
