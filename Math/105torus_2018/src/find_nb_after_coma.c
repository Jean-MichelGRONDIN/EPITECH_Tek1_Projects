/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** find nb number after coma
*/

#include "./../include/torus.h"

int find_nb_after_coma(double nb, int max)
{
    int remove = 0;
    int i = 0;

    while (nb != 0 && i != max) {
        nb = nb * 10;
        remove = nb;
        nb = nb - remove;
        i = i + 1;
    }
    return (i);
}
