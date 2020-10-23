/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** clean_strtab_lines
*/

#include "asm.h"

char    **clear_strtab_lines(char **tab)
{
    int i = 0;
    int len = -1;

    if (tab == NULL)
        return (NULL);
    len = my_strtab_len(tab);
    while (tab[i] != NULL) {
        tab[i] = replace_in_str(tab[i], '\t', ' ');
        tab[i] = my_clear_string(tab[i], ' ', 0);
        i = i + 1;
    }
    tab = copy_without_empty_lines(tab, len);
    return (tab);
}