##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## compiles all tests
##

SRC_UT	=	./

SRC_DIR	=	./../src/

SRC	=	$(SRC_DIR)anagram.c	\
		$(SRC_UT)test_anagram.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./../include/

LIB	=	-L./../lib/my/ -lmy

LDFLAGS	=	-lcriterion $(LIB) -lgcov

EXTRA_FLAGS	=	-W -Wall -Werror -Wextra

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

re:	fclean all
