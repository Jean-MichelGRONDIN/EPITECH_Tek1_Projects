/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** first function of the project
*/

#include "./../include/bombyx.h"

int bombyx(int ac, char **av)
{
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            disp_usage();
            return (0);
        }
    }
    if (ac > 2 && ac < 5) {
        if (check_args_are_numbers(ac, av) == 1)
            return (84);
        return (initialise(ac, av));
    }
    my_pstrerr("Error wrong number of arguments !\n");
    return (84);
}
