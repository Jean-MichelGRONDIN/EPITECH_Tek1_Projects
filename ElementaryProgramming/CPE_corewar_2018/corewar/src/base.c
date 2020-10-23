/*
** EPITECH PROJECT, 2019
** sq
** File description:
** dqs
*/

#include "../../include/corewar/corewar.h"

void init_str(char *str)
{
    int i = 0;

    for (; i != 8; i++)
        str[i] = '0';
    str[i] = 0;
}

char *convert_10_2(int nb)
{
    char *str = malloc(sizeof(char) * 9);
    int i = 0;
    int nbnb = 0;

    if (nb < 0)
        nb = 256 + nb ;
    i = 0;
    init_str(str);
    while (nb != 0) {
        while ((nbnb = my_compute_power_rec(2, i)) < nb)
            i++;
        if (nbnb > nb) {
            i--;
            nbnb = my_compute_power_rec(2, i);
        }
        str[i] = '1';
        nb = nb - nbnb;
        nbnb = 0;
        i = 0;
    }
    return (my_revstr(str));
}