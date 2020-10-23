##
## EPITECH PROJECT, 2018
## CPool_Day10_2018
## File description:
## Makefile compile libmy
##

SRC	=	my_compute_power_rec.c	\
		my_str_is_int.c	\
		my_pstrerr.c	\
		my_pcharerr.c	\
		my_assemble_str.c	\
		get_next_line.c	\
		my_memset.c \
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_show_word_array.c	\
		my_sort_int_array.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_strupcase.c	\
		my_char_isnum.c	\
		count_until_line_finisher.c   \
		count_until_not_line_finisher.c       \
		find_nb_words_in_str.c        \
		my_is_in.c    \
		my_strndup.c  \
		my_str_to_word_array.c	\
		my_swap.c

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
