/*
** EPITECH PROJECT, 2019
** asm
** File description:
** get_this_line_index
*/

#include "asm.h"

int get_this_line_index(char **tab, char *line)
{
    int res = -1;
    int i = 0;

    if (tab == NULL || line == NULL)
        return (-1);
    while (res == -1 && tab[i] != NULL) {
        if (my_strncmp(tab[i], line, my_strlen(line)) == 0)
            res = i;
        i = i + 1;
    }
    return (res);
}