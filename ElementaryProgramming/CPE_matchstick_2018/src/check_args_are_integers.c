/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** check that args are integers
*/

#include "./../include/match.h"

int check_args_are_integers(int ac, char **av)
{
    int i = 1;

    while (i != ac) {
        if (my_str_is_int(av[i]) == 0)
            return (0);
        i = i + 1;
    }
    return (1);
}
