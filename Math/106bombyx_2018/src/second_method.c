/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** second method of resolvation
*/

#include "./../include/bombyx.h"

void    second_method_calc(double *args, double k)
{
    int min = args[1];
    int max = args[2];
    double  res = k * args[0] * ((1000 - args[0]) / 1000);
    int nb = 0;

    while (nb <= max) {
        if (nb >= min)
            printf("%.2f %.2f\n", k, res);
        res = k * res * ((1000 - res) / 1000);
        nb = nb + 1;
    }
}

void    second_method(double *args)
{
    double  k = 1.00;

    while (k <= 4) {
        second_method_calc(args, k);
        k = k + 0.01;
    }
}
