/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** get_this_line
*/

#include "asm.h"

char    *get_this_line(char * const *tab, char const *line)
{
    char    *res = NULL;
    int i = 0;

    if (tab == NULL || line == NULL)
        return (NULL);
    while (res == NULL && tab[i] != NULL) {
        if (my_strncmp(tab[i], line, my_strlen(line)) == 0)
            res = my_strdup(tab[i]);
        i = i + 1;
    }
    return (res);
}