/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** first function of the project
*/

#include "./../include/navy.h"

int navy(int ac, char **av)
{
    if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 0) {
            print_usage();
            return (0);
        }
    }
    if (ac < 2 || ac > 3) {
        my_pstrerr("Wrong number of arguments !\n");
        return (84);
    }
    return (initialise(ac, av));
}
