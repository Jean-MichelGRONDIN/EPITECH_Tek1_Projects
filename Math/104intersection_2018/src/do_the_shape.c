/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** do the calc linked to av[1]
*/

#include "./../include/intersection.h"

int check_if_is_integer(char *str)
{
    int i  = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}

void    exit_wrong_opt(void)
{
    write(2, "Wrong opt !\nPlease check the -h .\n", 34);
    exit(84);
}

void    do_the_shape(char **av, double *args)
{
    int shape = atoi(av[1]);

    if (check_if_is_integer(av[1]) == 0) {
        exit_wrong_opt();
    }
    if (shape == 1) {
        sphere(av, args);
    }
    if (shape == 2) {
        cylinder(av, args);
    }
    if (shape == 3) {
        cone(av, args);
    }
    exit_wrong_opt();
}
