/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** malloc map tab
*/

#include "./../include/generator.h"

char    **init_tab(int y, int x)
{
    char    **tab = malloc(sizeof(char *) * (y + 1));
    int i = 0;

    while (i != y) {
        tab[i] = malloc(sizeof(char) * (x + 1));
        tab[i][x] = '\0';
        tab[i] = my_memset(tab[i], 'X', x);
        i = i + 1;
    }
    tab[i] = NULL;
    return (tab);
}
