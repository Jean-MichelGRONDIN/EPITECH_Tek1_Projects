/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** get an alea number
*/

#include "./../include/generator.h"

int nb_alea(int a, int b)
{
    int nb = 0;

    if ((b - a) != 0 && (b - a + 1) != 0 && (b - a + 1 + a) != 0)
        b = b + 1;
    else
        return (0);
    nb = rand() % (b - a) + a;
    return (nb);
}
