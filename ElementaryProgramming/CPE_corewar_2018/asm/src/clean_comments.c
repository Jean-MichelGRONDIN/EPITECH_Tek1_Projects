/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** clean_comments
*/

#include "asm.h"

char    *check_comments_in_this_line(char *str)
{
    char    *new = NULL;
    char    sep[] = {COMMENT_CHAR, '\0'};
    int n = count_until_line_finisher(str, sep);

    if (str[n] != '\0') {
        new = my_strndup(str, n);
        str = free_cleanly_this_str(str);
        str = new;
    }
    return (str);
}

char    **clean_comments_lines(char **tab)
{
    int i = 0;
    int len = my_strtab_len(tab);

    while (tab[i] != NULL) {
        if (tab[i][0] == COMMENT_CHAR)
            tab[i] = free_cleanly_this_str(tab[i]);
        else
            tab[i] = check_comments_in_this_line(tab[i]);
        i = i + 1;
    }
    tab = copy_without_empty_lines(tab, len);
    return (tab);
}