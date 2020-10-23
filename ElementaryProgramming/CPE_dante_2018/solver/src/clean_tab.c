/*
** EPITECH PROJECT, 2019
** clean_tab
** File description:
** clean_tab
*/

#include "solver.h"

char **clean_tab(char **tab)
{
    int i = 0;
    int x = 0;

    while (tab[i] != NULL) {
        for (x = 0; tab[i][x + 1] != '\0'; x++);
        if (tab[i][x] == '\n')
            tab[i][x] = '\0';
        i++;
    }
    i--;
    if (tab[i][x] == '\0')
        x--;
    if (tab[i][x] == 'x')
        return (NULL);
    return (tab);
}
