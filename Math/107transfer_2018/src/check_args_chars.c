/*
** EPITECH PROJECT, 2019
** 107transfer_2018
** File description:
** check chars of args of the prog
*/

#include "./../include/transfer.h"

int check_this_args_chars(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (my_is_in(str[i], "+-*123456789") == 0)
            return (1);
        i = i + 1;
    }
    return (0);
}

int check_args_chars(int ac, char **av)
{
    int i = 1;

    while (i != ac) {
        if (check_this_args_chars(av[i]) == 1) {
            my_pstrerr("Error wrong character detected in this argument :\n");
            my_pstrerr(av[i]);
            my_pcharerr('\n');
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
