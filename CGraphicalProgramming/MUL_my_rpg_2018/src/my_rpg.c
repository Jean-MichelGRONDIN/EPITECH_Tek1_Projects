/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** first function called
*/

#include "./../include/rpg.h"

int my_rpg(int ac, char **av)
{
    if (ac == 2)
        if (my_strcmp(av[1], "-h") == 0) {
            display_usage();
            return (0);
        }
    program_loop();
    return (0);
}
