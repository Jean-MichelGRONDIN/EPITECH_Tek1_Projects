/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** first function of the prog
*/

#include "./../include/defender.h"

int my_defender(int ac, char **av)
{
    if (ac == 2)
        if (my_strcmp(av[1], "-h") == 0) {
            disp_usage();
            return (0);
        }
    return (launcher_loop());
}
