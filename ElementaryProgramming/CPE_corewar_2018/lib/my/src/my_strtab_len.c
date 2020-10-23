/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** count the nb of line in a tab of str
*/

#include "./../include/my.h"
#include <stdlib.h>

int my_strtab_len(char * const *tab)
{
    int i = 0;

    if (tab == NULL)
        return (i);
    while (tab[i] != NULL) {
        i = i + 1;
    }
    return (i);
}
