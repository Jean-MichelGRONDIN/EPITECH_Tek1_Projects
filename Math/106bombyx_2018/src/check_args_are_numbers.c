/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** check that are are numbers
*/

#include "./../include/bombyx.h"

int check_args_are_numbers(int ac, char **av)
{
    int i = 1;

    while (i != ac) {
        if (my_str_isnum(av[i]) == 0) {
            my_pstrerr("Error arguments must be only numbers !\n");
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
