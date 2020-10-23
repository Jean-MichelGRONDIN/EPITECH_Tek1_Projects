/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** copy_without_empty_line
*/

#include "asm.h"

int my_strtab_len_empty_line(char **tab, int len)
{
    int n = 0;
    int i = 0;

    while (i != len) {
        if (tab[i] != NULL)
            n = n + 1;
        i = i + 1;
    }
    return (n);
}

char    **copy_without_empty_lines(char **tab, int len)
{
    int n = my_strtab_len_empty_line(tab, len);
    char    **new = NULL;
    int i_s = 0;
    int i = 0;

    if (n == len)
        return (tab);
    new = malloc(sizeof(char *) * (n + 1));
    while (i_s != len) {
        if (tab[i_s] != NULL) {
            new[i] = my_strdup(tab[i_s]);
            tab[i_s] = free_cleanly_this_str(tab[i_s]);
            i = i + 1;
        }
        i_s = i_s + 1;
    }
    free(tab);
    tab = NULL;
    new[i] = NULL;
    return (new);
}