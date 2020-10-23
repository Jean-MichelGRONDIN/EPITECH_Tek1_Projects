/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** place star on this row between this values
*/

#include "./../include/generator.h"

char    **go_in_row(char **tab, int x, int y, int nb)
{
    int i = y;

    while (i <= (y + nb)) {
        tab[i][x] = '*';
        i = i + 1;
    }
    return (tab);
}
