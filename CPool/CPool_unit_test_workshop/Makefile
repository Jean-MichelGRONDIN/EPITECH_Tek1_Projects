##
## EPITECH PROJECT, 2018
## 
## File description:
## 
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I./

TESTFLAGS	=	--coverage -lcriterion

SRC_TEST	=	test_main.c

OBJ_TEST	=	$(SRC_TEST:.c=.o)

NAME_TEST	=	unit_tests

all:	$(NAME)

tests_run:	$(OBJ) $(OBJ_TEST)
		gcc -o $(NAME_TEST) $(OBJ) $(OBJ_TEST) --coverage -lcriterion
		./$(NAME_TEST)

$(NAME):	tests_run
