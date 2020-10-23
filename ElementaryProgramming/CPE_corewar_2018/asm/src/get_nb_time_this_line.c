/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** get_nb_time_this_line
*/

#include "asm.h"

int get_nb_time_this_line(char * const *tab, char const *line)
{
    int res = 0;
    int i = 0;

    if (tab == NULL || line == NULL)
        return (0);
    while (tab[i] != NULL) {
        if (my_strncmp(tab[i], line, my_strlen(line)) == 0)
            res = res + 1;
        i = i + 1;
    }
    return (res);
}