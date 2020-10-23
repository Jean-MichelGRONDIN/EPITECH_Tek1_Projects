##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)asm_part.c					\
		$(SRC_DIR)check_last_quote_place.c		\
		$(SRC_DIR)get_nb_time_this_line.c		\
		$(SRC_DIR)initialise.c					\
		$(SRC_DIR)check_instruction_exist.c		\
		$(SRC_DIR)check_nbr_arg.c				\
		$(SRC_DIR)check_type_parme.c			\
		$(SRC_DIR)list.c						\
		$(SRC_DIR)check_instructions.c			\
		$(SRC_DIR)free_triple_strtab.c			\
		$(SRC_DIR)disp_usage.c					\
		$(SRC_DIR)replace_in_str.c				\
		$(SRC_DIR)asm.c							\
		$(SRC_DIR)open_files.c					\
		$(SRC_DIR)get_this_line.c				\
		$(SRC_DIR)get_this_line_index.c			\
		$(SRC_DIR)how_many_of_that_char.c		\
		$(SRC_DIR)check_name.c					\
		$(SRC_DIR)check_comment.c				\
		$(SRC_DIR)check_this_file.c				\
		$(SRC_DIR)load_this_file_cleanly.c		\
		$(SRC_DIR)clean_this_file.c				\
		$(SRC_DIR)clear_strtab_lines.c			\
		$(SRC_DIR)clean_comments.c				\
		$(SRC_DIR)copy_without_empty_lines.c	\
		$(SRC_DIR)get_all_label.c				\
		$(SRC_DIR)check_label.c					\
		$(SRC_DIR)put_in_list.c					\
		$(SRC_DIR)op.c							\
		$(SRC_DIR)get_size.c					\
		$(SRC_DIR)write_header.c				\
		$(SRC_DIR)write_prog.c					\
		$(SRC_DIR)base.c						\
		$(SRC_DIR)write_prog_bis.c				\
		$(SRC_DIR)check_label_two.c				\
		$(SRC_DIR)verif_label.c					\
		main.c

INC	=	-I./../include/asm/ -I./../include/global/

LIB	=	-L./../lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	asm

all:	$(OBJ)
	make -sC ./../lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)
	rm -f vgcore.*
	rm -f *.gc*
	rm -f $(SRC_DIR)*.gc*
	rm -f $(SRC_DIR)vgcore.*
	make -sC ./../lib/my clean

fclean:	clean
	make -sC ./../lib/my fclean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all	\
	re	\
	clean	\
	fclean