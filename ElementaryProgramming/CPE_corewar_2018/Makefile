##
## EPITECH PROJECT, 2019
## PSU_my_ls_2018
## File description:
## makefile for th project
##

all:
	make -C asm/
	make -C corewar/

clean:
	make -C asm/ clean
	make -C corewar/ clean
	make -C tests/ clean

fclean:	clean
	make -C asm/ fclean
	make -C corewar/ fclean
	make -C tests/ fclean

tests_run:
		make -sC ./lib/my
		make -sC ./tests
		./tests/unit_tests

re:	fclean all

.PHONY:	all	\
	re	\
	clean	\
	fclean	\
	tests_run