##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

SRC_DIR	=	./src/

SRC	=

INC	=	-I./include/

LIB	=	-L./lib/my -lmy

CFLAGS	=	$(INC) $(LIB) $(EXTRA_FLAGS)

EXTRA_FLAGS	=	-W -Wall -Wextra -g3 -g -ggdb

OBJ	=	$(SRC:.c=.o)

NAME	=

all:
	make -C generator/
	make -C solver/

generator:
		make -C generator/

solver:
		make -C solver/

clean:
	make -C generator/ clean
	make -C solver/ clean

fclean:	clean
	make -C generator/ fclean
	make -C solver/ fclean

tests_run:
		make -C ./tests
		./tests/unit_tests

re:	fclean all

.PHONY:	all	\
	re	\
	solver	\
	generator	\
	clean	\
	fclean	\
	tests_run
