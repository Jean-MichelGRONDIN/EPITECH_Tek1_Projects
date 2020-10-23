/*
** EPITECH PROJECT, 2019
** fct
** File description:
** fct
*/

#include "my.h"
#include "solver.h"

int len_tab(char **tab)
{
    int i = 0;

    while (tab[i] != NULL)
        i++;
    i--;
    return (i);
}

int my_end(char **tab, int y, int x)
{
    int ly = len_tab(tab);
    int lx = my_strlen(tab[0]) - 1;

    if (ly == y && lx == x)
        return (1);
    return (0);
}

int my_around(char **tab, int y, int x)
{
    int v = 0;

    if (tab[y][x + 1] == '*')
        return (1);
    (void)v;
    if (tab[y + 1] != NULL && tab[y + 1][x] == '*')
        return (1);
    (void)v;
    if (y - 1 >= 0 && tab[y - 1][x] == '*')
        return (1);
    (void)v;
    if (x - 1 >= 0 && tab[y][x - 1] == '*')
        return (1);
    return (0);
}
