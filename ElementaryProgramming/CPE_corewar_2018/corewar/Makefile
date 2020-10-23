##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=	$(SRC_DIR)corewar.c	\
		$(SRC_DIR)add_to_arg_champ_list.c	\
		$(SRC_DIR)corewar_list.c	\
		$(SRC_DIR)dump_arg_champ_list.c	\
		$(SRC_DIR)get_prog_name.c	\
		$(SRC_DIR)load_champ_args.c	\
		$(SRC_DIR)load_dump_cycle_opt.c	\
		$(SRC_DIR)prog_number_arg_champ_list.c	\
		$(SRC_DIR)prog_adress_champ_list.c	\
		$(SRC_DIR)disp_usage.c	\
		$(SRC_DIR)write_champ.c	\
		$(SRC_DIR)init_action.c	\
		$(SRC_DIR)instruction.c	\
		$(SRC_DIR)instruction_two.c	\
		$(SRC_DIR)instruction_three.c	\
		$(SRC_DIR)instruction_four.c	\
		$(SRC_DIR)lunch_corwar.c	\
		$(SRC_DIR)op.c	\
		$(SRC_DIR)base.c\
		$(SRC_DIR)get_param.c\
		$(SRC_DIR)manage_champ.c\
		main.c

INC	=	-I./../include/corewar/ -I./../include/global/

LIB	=	-L./../lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=	corewar

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