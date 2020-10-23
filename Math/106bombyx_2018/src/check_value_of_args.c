/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** check value in args
*/

#include "./../include/bombyx.h"

int check_values_are_integers(int ac, char **av)
{
    if (my_str_is_int(av[1]) == 0) {
        my_pstrerr("Error the argument n must be an integer !\n");
        return (1);
    }
    if (ac == 4)
        if (my_str_is_int(av[2]) == 0 || my_str_is_int(av[3]) == 0) {
            my_pstrerr("Error i0 and i1 must be both integers !\n");
            return (1);
        }
    return (0);
}

int check_value_of_args(int ac, double *args, char **av)
{
    if (check_values_are_integers(ac, av) == 1)
        return (1);
    if (args[0] < 0) {
        my_pstrerr("Error the argument n must be positive !\n");
        return (1);
    }
    if (ac == 3)
        if (args[1] < 1 || args[1] > 4) {
            my_pstrerr("Error the argument k must be from 1 to 4 !\n");
            return (1);
        }
    if (ac == 4)
        if (args[1] >= args[2]) {
            my_pstrerr("Error i0 can\'t be higher or equal than i1 !\n");
            return (1);
        }
    return (0);
}
