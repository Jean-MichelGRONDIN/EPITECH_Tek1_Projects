/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** first function of the project
*/

#include "./../include/torus.h"

int torus(int ac, char **av)
{
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            display_the_usage();
            return (0);
        }
    }
    if (ac != 8) {
        write(2, "Wrong number of arguments !\n", 28);
        return (84);
    }
    if (check_that_all_args_are_integers(ac, av) == 0) {
        write(2, "Wrong argument one or more isn't an integer !\n", 46);
        return (84);
    }
    return (initialise(ac, av));
}
