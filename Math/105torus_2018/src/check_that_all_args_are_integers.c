/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** check if all arguments are integers
*/

#include "./../include/torus.h"

int check_that_all_args_are_integers(int ac, char **av)
{
    int i = 1;

    while (i != ac) {
        if (my_str_is_int(av[i]) == 0) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
