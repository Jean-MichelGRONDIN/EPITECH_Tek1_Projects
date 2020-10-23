/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check if their is a tabulation
*/

#include "./../include/my_norm.h"

void    is_there_a_tab(char *str, int line, file_t *files)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '\t')
            my_printf(COLOR_YELLOW "[%s]l.%i" COLOR_RESET
            ": Tabulation are not allowed,\n", files->path, (line + 1));
        i = i + 1;
    }
}

void    check_tabulation(char **file, file_t *files)
{
    int i = 0;

    while (file[i] != NULL) {
        is_there_a_tab(file[i], i, files);
        i = i + 1;
    }
}
