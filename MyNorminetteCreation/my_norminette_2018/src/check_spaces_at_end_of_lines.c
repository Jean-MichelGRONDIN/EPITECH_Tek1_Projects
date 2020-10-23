/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check if there is spaces at the end of the line
*/

#include "./../include/my_norm.h"

void    check_spaces_at_end_of_lines(char **tab, file_t *files)
{
    int i  = 0;

    while (tab[i] != NULL) {
        if (there_is_only_spaces(tab[i]) == 1 && my_strlen(tab[i]) > 1)
            if (tab[i][my_strlen(tab[i]) - 2] == ' ')
                my_printf(COLOR_GREEN "[%s]l.%i" COLOR_RESET
                ": Wrong space(s) at the end of the line,\n",
                files->path, (i + 1));
        i = i + 1;
    }
}
