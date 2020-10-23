##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile to compile unit tests
##

SRC_UT	=	./

SRC_DIR	=	./../src/

SRC	=	$(SRC_UT)test_sum_disp_stdarg.c	\
		$(SRC_UT)test_converte_to_binary_base.c	\
		$(SRC_UT)test_converte_to_oct_base.c	\
		$(SRC_UT)test_converte_to_hexadec_base.c	\
		$(SRC_UT)test_my_printf.c

SRC_SRC	=	$(SRC_DIR)my_strdup.c	\
		$(SRC_DIR)converte_to_hexadec_base.c	\
		$(SRC_DIR)converte_to_oct_base.c	\
		$(SRC_DIR)converte_to_binary_base.c	\
		$(SRC_DIR)my_printf.c	\
		$(SRC_DIR)set_char_if_correct_symbol.c	\
		$(SRC_DIR)disp_stdarg.c	\
		$(SRC_DIR)sum_stdarg.c	\
		$(SRC_DIR)my_putchar.c	\
		$(SRC_DIR)my_put_nbr.c	\
		$(SRC_DIR)my_putstr.c	\
		$(SRC_DIR)my_revstr.c	\
		$(SRC_DIR)my_strlen.c


OBJ	=	$(SRC:.c=.o)

SRC_OBJ	=	$(SRC_SRC:.c=.o)

INC	=	-I./../include/

LIB	=	-L./../ -lmy

EXTRA_FLAG	= -lcriterion --coverage

CFLAGS	=	$(INC) $(LIB) -W -Wall -Werror -Wextra $(EXTRA_FLAG)

NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC_OBJ) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f *.gc*

fclean:		clean
		rm -f $(NAME)

re:		fclean all
