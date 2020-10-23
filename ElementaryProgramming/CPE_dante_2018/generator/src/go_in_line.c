/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** place star on this line between this values
*/

#include "./../include/generator.h"

char    **go_in_line(char **tab, int x, int y, int nb)
{
    int i = x;

    while (i <= (x + nb)) {
        tab[y][i] = '*';
        i = i + 1;
    }
    return (tab);
}
