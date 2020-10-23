##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## compiles all tests
##

SRC_UT	=	./

ASM_SRC_DIR	=	./../asm/src/

SRC	=	$(SRC_UT)test_copy_without_empty_lines.c					\
		$(SRC_UT)test_clean_comments.c								\
		$(SRC_UT)test_clear_strtab_lines.c							\
		$(SRC_UT)test_clean_this_file.c								\
		$(SRC_UT)test_replace_in_str.c								\
		$(SRC_UT)test_get_all_label.c								\
		$(SRC_UT)test_check_label.c									\
		$(ASM_SRC_DIR)get_nb_time_this_line.c						\
		$(ASM_SRC_DIR)check_last_quote_place.c						\
		$(ASM_SRC_DIR)copy_without_empty_lines.c					\
		$(ASM_SRC_DIR)clear_strtab_lines.c							\
		$(ASM_SRC_DIR)clean_this_file.c								\
		$(ASM_SRC_DIR)replace_in_str.c								\
		$(ASM_SRC_DIR)verif_label.c									\
		$(ASM_SRC_DIR)check_label.c									\
		$(ASM_SRC_DIR)check_label_two.c								\
		$(ASM_SRC_DIR)get_all_label.c								\
		$(ASM_SRC_DIR)put_in_list.c									\
		$(ASM_SRC_DIR)get_size.c									\
		$(ASM_SRC_DIR)op.c											\
		$(ASM_SRC_DIR)check_type_parme.c							\
		$(SRC_UT)test_get_this_line.c								\
		$(SRC_UT)test_get_this_line_index.c							\
		$(SRC_UT)test_check_name.c									\
		$(SRC_UT)test_check_comment.c								\
		$(SRC_UT)test_check_param.c									\
		$(SRC_UT)test_how_many_of_that_char.c						\
		$(ASM_SRC_DIR)get_this_line.c								\
		$(ASM_SRC_DIR)get_this_line_index.c							\
		$(ASM_SRC_DIR)check_name.c									\
		$(ASM_SRC_DIR)check_comment.c								\
		$(ASM_SRC_DIR)how_many_of_that_char.c						\
		$(ASM_SRC_DIR)clean_comments.c

OBJ	=	$(SRC:.c=.o)

INC	=	-I./../include/asm/ -I./../include/corewar/ -I./../include/global/

LIB	=	-L./../lib/my/ -lmy

LDFLAGS	=	-lcriterion -lm  $(LIB) -lgcov

EXTRA_FLAGS	=	-W -Wall -Wextra

CFLAGS	=	$(INC) $(EXTRA_FLAGS) --coverage

NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
		make -sC ../lib/my/
		gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)
		rm -f vgcore.*
		rm -f *.gc*

fclean:		clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all	\
	re	\
	clean	\
	fclean