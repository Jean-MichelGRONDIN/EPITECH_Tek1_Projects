/*
** EPITECH PROJECT, 2019
** asm
** File description:
** free_triple_strtab
*/

#include "asm.h"

char    ***free_triple_strtab(char ***tab)
{
    int i = 0;

    if (tab != NULL)
        return (tab);
    while (tab[i] != NULL) {
        tab[i] = free_cleanly_str_tab(tab[i]);
        i = i + 1 ;
    }
    free(tab);
    tab = NULL;
    return (tab);
}