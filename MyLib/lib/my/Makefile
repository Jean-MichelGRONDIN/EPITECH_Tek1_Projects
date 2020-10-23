##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## makefile for project the project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)my_clear_string.c	\
		$(SRC_DIR)my_char_str_cat.c	\
		$(SRC_DIR)my_replace_string.c	\
		$(SRC_DIR)converte_to_hexadec_base.c	\
		$(SRC_DIR)converte_to_oct_base.c	\
		$(SRC_DIR)int_to_str.c	\
		$(SRC_DIR)read_this_file.c	\
		$(SRC_DIR)free_cleanly_str_tab.c	\
		$(SRC_DIR)free_cleanly_this_str.c	\
		$(SRC_DIR)my_strtab_len.c	\
		$(SRC_DIR)converte_to_binary_base.c	\
		$(SRC_DIR)my_printf.c	\
		$(SRC_DIR)set_char_if_correct_symbol.c	\
		$(SRC_DIR)disp_stdarg.c	\
		$(SRC_DIR)sum_stdarg.c	\
		$(SRC_DIR)my_compute_power_rec.c	\
		$(SRC_DIR)my_str_is_int.c	\
		$(SRC_DIR)my_pstrerr.c	\
		$(SRC_DIR)my_pcharerr.c	\
		$(SRC_DIR)my_assemble_str.c	\
		$(SRC_DIR)get_next_line.c	\
		$(SRC_DIR)my_memset.c	\
		$(SRC_DIR)my_compute_square_root.c	\
		$(SRC_DIR)my_find_prime_sup.c	\
		$(SRC_DIR)my_getnbr.c	\
		$(SRC_DIR)my_isneg.c	\
		$(SRC_DIR)my_is_prime.c	\
		$(SRC_DIR)my_putchar.c	\
		$(SRC_DIR)my_put_nbr.c	\
		$(SRC_DIR)my_putstr.c	\
		$(SRC_DIR)my_revstr.c	\
		$(SRC_DIR)my_showmem.c	\
		$(SRC_DIR)my_showstr.c	\
		$(SRC_DIR)my_show_word_array.c	\
		$(SRC_DIR)my_sort_int_array.c	\
		$(SRC_DIR)my_strcapitalize.c	\
		$(SRC_DIR)my_strcat.c	\
		$(SRC_DIR)my_strcmp.c	\
		$(SRC_DIR)my_strcpy.c	\
		$(SRC_DIR)my_strdup.c	\
		$(SRC_DIR)my_str_isalpha.c	\
		$(SRC_DIR)my_str_islower.c	\
		$(SRC_DIR)my_str_isnum.c	\
		$(SRC_DIR)my_str_isprintable.c	\
		$(SRC_DIR)my_str_isupper.c	\
		$(SRC_DIR)my_strlen.c	\
		$(SRC_DIR)my_strlowcase.c	\
		$(SRC_DIR)my_strncat.c	\
		$(SRC_DIR)my_strncmp.c	\
		$(SRC_DIR)my_strncpy.c	\
		$(SRC_DIR)my_strstr.c	\
		$(SRC_DIR)my_strupcase.c	\
		$(SRC_DIR)my_char_isnum.c	\
		$(SRC_DIR)count_until_line_finisher.c	\
		$(SRC_DIR)count_until_not_line_finisher.c	\
		$(SRC_DIR)find_nb_words_in_str.c	\
		$(SRC_DIR)my_is_in.c	\
		$(SRC_DIR)my_strndup.c	\
		$(SRC_DIR)my_str_to_word_array.c	\
		$(SRC_DIR)my_swap.c

CFLAGS	=	-W -Wall -Werror -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp include/my.h ../../include

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f src/*.gc*

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
