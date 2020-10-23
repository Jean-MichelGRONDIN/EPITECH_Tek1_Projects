/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** init args of the prog in an array of double
*/

#include "./../include/bombyx.h"

double  *init_args_in_arr_of_double(int ac, char **av)
{
    double  *args = malloc(sizeof(double) * (ac - 1));
    int nb = 1;
    int i = 0;

    while (i != ac - 1) {
        args[i] = atof(av[nb]);
        i = i + 1;
        nb = nb + 1;
    }
    return (args);
}
