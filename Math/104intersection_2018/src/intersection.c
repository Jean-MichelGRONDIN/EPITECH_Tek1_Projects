/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** first function of the prog
*/

#include "./../include/intersection.h"

int check_if_arg_are_num(int ac, char **av)
{
    int i = 1;

    while (i != ac) {
        if (my_str_isnum(av[i]) == 0) {
            write(2, "Error, no number argument detected !\n", 37);
            return (84);
        }
        i = i + 1;
    }
    return (0);
}

int intersection(int ac, char **av)
{
    double  *args = NULL;

    if (ac == 2) {
        if (strcmp(av[1], "-h") == 0) {
            display_usage();
            return (0);
        }
    }
    if (ac != 9) {
        write(2, "Wrong number of arguments !\n", 28);
        return (84);
    }
    if (check_if_arg_are_num(ac, av) == 84) {
        return (84);
    }
    args = turn_args_to_doubles(av);
    do_the_shape(av, args);
    return (0);
}
