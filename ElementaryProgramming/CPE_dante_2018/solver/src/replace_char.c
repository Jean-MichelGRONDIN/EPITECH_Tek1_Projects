/*
** EPITECH PROJECT, 2019
** replace
** File description:
** replace
*/

#include "solver.h"

char *check_line(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '2')
            str[i] = '*';
        i++;
    }
    return (str);
}

char **replace_char(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        tab[i] = check_line(tab[i]);
        i++;
    }
    return (tab);
}
