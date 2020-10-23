/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check is there is comments inside a function
*/

#include "./../include/my_norm.h"

void    there_is_comment_on_this_line(char **tab, int line, file_t *files)
{
    int i_line = line;
    int i = 0;

    while (tab[i_line][i] != '\0') {
        if (tab[i_line][i] == '/') {
            if (i < my_strlen(tab[i_line])) {
                if (tab[i_line][i + 1] == '/' ||
                    tab[i_line][i + 1] == '*') {
                    my_printf(COLOR_RED "[%s]l.%i" COLOR_RESET
                    ": Comment inside a function,\n",
                    files->path, (i_line + 1));
                }
            }
        }
        i = i + 1;
    }
}

void    check_if_comment_inside_this_function(char **tab, int line, file_t *files)
{
    int i = line;
    int start = 0;
    int end = 0;
    int nb_hook = 0;

    while (tab[i] != NULL && end == 0) {
        if (start == 0 && is_this_function_hook(tab[i], &nb_hook) == 1)
            start = 1;
        else if (start == 1 && is_this_function_hook(tab[i], &nb_hook) == -1)
            end = 1;
        else if (start == 1)
            there_is_comment_on_this_line(tab, i, files);
        i = i + 1;
    }
}

void    check_comment_inside_a_function(char **tab, file_t *files)
{
    int i = 6;
    int len = my_strtab_len(tab);

    if (len > 6)
        while (tab[i] != NULL) {
            if (is_a_function(tab, i) == 1) {
                check_if_comment_inside_this_function(tab, i, files);
            }
            i = i + 1;
        }
}
