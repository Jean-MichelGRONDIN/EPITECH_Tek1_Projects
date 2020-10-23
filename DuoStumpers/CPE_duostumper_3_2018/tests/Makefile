##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## compiles all tests
##

SRC_UT	=	./

SRC_DIR	=	./../src/

SRC	=	$(SRC_DIR)my_char_isalpha.c	\
		$(SRC_DIR)get_message_input.c	\
		$(SRC_DIR)cipher.c	\
		$(SRC_UT)test_my_char_isalpha.c	\
		$(SRC_UT)test_get_message_input.c	\
		$(SRC_UT)test_cipher.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./../include/

LIB	=	-L./../lib/my/ -lmy

LDFLAGS	=	-lcriterion -lm  $(LIB) -lgcov

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

re:	fclean all
