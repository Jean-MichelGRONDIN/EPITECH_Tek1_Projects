##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

SRC	=	get_matrice.c

SRC_F	=	main.c

SRC_T 	=	./tests/

INC	=	-I ./include

CFLAGS	=	$(INC) -W -Wall -g3 -lm

OBJ	=	$(SRC:.c=.o)  $(SRC_F:.c=.o)

NAME	=	108trigo

NAME_T 	= 	unit_tests

all: 		$(NAME)

$(NAME): 	$(OBJ)
	 	gcc -o $(NAME) $(OBJ) $(CFLAGS)

# tests_run: 	$(OBJ_T)
# 	   	gcc -o $(NAME_T) $(SRC) $(SRC_T) $(CFLAGS) -lcriterion --coverage
# 	   	./$(NAME_T)
clean:		
		rm -f $(OBJ)
		rm -f *.gc*

fclean:		clean
		rm -f $(NAME)
		rm -f $(NAME_T)

re:		fclean all
