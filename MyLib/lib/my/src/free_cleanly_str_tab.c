/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** free cleanly this str array
*/

#include "./../include/my.h"
#include <stdlib.h>

char    **free_cleanly_str_tab(char **tab)
{
    int i = 0;

    if (tab != NULL) {
        while (tab[i] != NULL) {
            tab[i] = free_cleanly_this_str(tab[i]);
            i = i + 1;
        }
        free(tab);
        tab = NULL;
    }
    return (tab);
}
