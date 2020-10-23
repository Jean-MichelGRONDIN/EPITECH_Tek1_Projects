/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** chec the nb of char on each lines
*/

#include "./../include/my_norm.h"

void    check_limite_char_by_line(char **file, file_t *files)
{
    int i = 0;
    int len = 0;

    while (file[i] != NULL) {
        len = my_strlen(file[i]);
        if (len > 81)
            my_printf(COLOR_MAGENTA "[%s]l.%i" COLOR_RESET
            ": More than 80 characters on this line (actual :"
            COLOR_RED "%i" COLOR_RESET "),\n", files->path, (i + 1), (len - 1));
        i = i + 1;
    }
}
