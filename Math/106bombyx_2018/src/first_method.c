/*
** EPITECH PROJECT, 2019
** 106bombyx_2018
** File description:
** first methode of resolution
*/

#include "./../include/bombyx.h"

void    first_method(double n, double k, int nb)
{
    float   res = k * n * ((1000 - n) / 1000);

    printf("%d %.2f\n", (nb + 1), n);
    nb = nb + 1;
    while (nb < 100) {
        printf("%d %.2f\n", (nb + 1), res);
        nb = nb + 1;
        res = k * res * ((1000 - res) / 1000);
    }
}
