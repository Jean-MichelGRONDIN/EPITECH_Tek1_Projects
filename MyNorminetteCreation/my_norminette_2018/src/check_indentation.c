/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check the indentation of each lines
*/

#include "./../include/my_norm.h"

int find_nb_first_spaces(char *str)
{
    int i = 0;

    while (str[i] != '\0' && str[i] == ' ') {
        i = i + 1;
    }
    return (i);
}

int there_is_only_spaces(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ')
            return (1);
        i = i + 1;
    }
    return (0);
}

void    check_indentation(char **file, file_t *files)
{
    int i = 0;
    int nb = -1;

    while (file[i] != NULL) {
        nb = find_nb_first_spaces(file[i]);
        if ((nb % 4) != 0 || there_is_only_spaces(file[i]) == 0 || nb > 12) {
            my_printf(COLOR_YELLOW "[%s]l.%i" COLOR_RESET
            ": Wrong indentation,\n", files->path, (i + 1));
        }
        i = i + 1;
    }
}
