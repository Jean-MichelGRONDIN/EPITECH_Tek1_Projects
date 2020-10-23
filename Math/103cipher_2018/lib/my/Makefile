##
## EPITECH PROJECT, 2018
## CPool_Day10_2018
## File description:
## Makefile compile libmy
##

SRC	=	my_strdup.c	\
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra

NAME	=	libmy.a

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ../
		cp my.h ../../include

all:		$(NAME)

clean:
		rm -f $(OBJ)
		rm -f vgcore.*
		rm -f *.gc*

fclean:		clean
		rm -f $(NAME)
		rm -f ../$(NAME)

supraclean:	extraclean
		rm -f ../../include/my.h

re:		fclean all
