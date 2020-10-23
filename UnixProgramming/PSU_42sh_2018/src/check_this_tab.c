/*
** EPITECH PROJECT, 2019
** PSU_42sh_2018
** File description:
** clear_this_tab
*/

#include "minishell.h"

int check_this_tab(char **tab)
{
    int i = 0;

    if (tab == NULL)
        return (0);
    while (tab[i] != NULL) {
        if (check_if_nothing_in_the_str(tab[i]) == 0) {
            my_pstrerr("Invalid null command.\n");
            return (-1);
        }
        i = i + 1;
    }
    return (0);
}