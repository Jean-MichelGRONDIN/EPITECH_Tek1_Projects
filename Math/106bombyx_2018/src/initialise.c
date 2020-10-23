/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** init variables after checked them and launch the resolution
*/

#include "./../include/bombyx.h"

int initialise(int ac, char **av)
{
    double  *args = init_args_in_arr_of_double(ac, av);
    int nb = 0;

    if (check_value_of_args(ac, args, av) == 1) {
        return (84);
    }
    if (ac == 3) {
        first_method(args[0], args[1], nb);
        return (0);
    }
    if (ac == 4) {
        second_method(args);
        return (0);
    }
    free(args);
    my_pstrerr("Error wrong number of arguments !\n");
    return (84);
}
