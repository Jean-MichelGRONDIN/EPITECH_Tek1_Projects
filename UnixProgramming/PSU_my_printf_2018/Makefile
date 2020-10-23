##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project the project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)my_strdup.c     \
		$(SRC_DIR)converte_to_hexadec_base.c	\
		$(SRC_DIR)converte_to_oct_base.c	\
		$(SRC_DIR)converte_to_binary_base.c	\
		$(SRC_DIR)my_printf.c	\
		$(SRC_DIR)set_char_if_correct_symbol.c	\
		$(SRC_DIR)disp_stdarg.c	\
		$(SRC_DIR)sum_stdarg.c	\
                $(SRC_DIR)my_putchar.c    \
                $(SRC_DIR)my_put_nbr.c    \
                $(SRC_DIR)my_putstr.c     \
                $(SRC_DIR)my_revstr.c     \
                $(SRC_DIR)my_strlen.c

CFLAGS	=	-W -Wall -Werror -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f src/*.gc*
	make -sC ./tests clean

fclean:	clean
	rm -f $(NAME)
	make -sC ./tests fclean

tests_run:
		make -sC ./tests
		./tests/unit_tests

re:	fclean all
