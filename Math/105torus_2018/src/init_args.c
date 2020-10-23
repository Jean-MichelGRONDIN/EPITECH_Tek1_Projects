/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** get args in a arr of double
*/

#include "./../include/torus.h"

double  *init_args(int ac, char **av)
{
    double  *args = malloc(sizeof(double) * (ac - 1));

    args[0] = atof(av[1]);
    args[1] = atof(av[2]);
    args[2] = atof(av[3]);
    args[3] = atof(av[4]);
    args[4] = atof(av[5]);
    args[5] = atof(av[6]);
    args[6] = atof(av[7]);
    return (args);
}
