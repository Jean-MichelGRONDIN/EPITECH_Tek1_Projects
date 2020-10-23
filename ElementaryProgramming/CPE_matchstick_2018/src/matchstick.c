/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** first function called
*/

#include "./../include/match.h"

int matchstick(int ac, char **av)
{
    if (ac == 2)
        if (my_strcmp(av[1], "-h") == 0) {
            display_usage();
            return (0);
        }
    if (ac != 3)
        return (84);
    if (check_args_are_integers(ac, av) == 0) {
        write(2, "Arguments are not integers !\n", 29);
        return (84);
    }
    return (initialise(av));
}
