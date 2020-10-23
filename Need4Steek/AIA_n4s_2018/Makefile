##
## EPITECH PROJECT, 2019
## AIA_n4s_2018
## File description:
## Makefile
##

MAKE	=	make -C	lib/my

SRC	=	src/main.c		\
		src/my_str_to_wordtab.c \
		src/my_puttab.c		\
		src/check_wall.c	\
		src/libvrep.c		\
		src/back.c

CFLAGS	=	-Iinclude -g

NAME	=	ai

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE)
		gcc -o $(NAME) $(OBJ) -L lib/my -lmy

clean:
		$(MAKE) clean
		rm -f $(OBJ)

fclean:		clean
		$(MAKE) fclean
		rm -f $(NAME)

re:		fclean all
