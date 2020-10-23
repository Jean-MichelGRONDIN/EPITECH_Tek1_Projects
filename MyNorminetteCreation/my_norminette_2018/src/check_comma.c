/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check space or \n after comma
*/

#include "./../include/my_norm.h"

void    check_comma_of_this_line(char *str, file_t *files, int line)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ',') {
            if (i > 0)
                if (str[i - 1] == ' ')
                    my_printf(COLOR_GREEN "[%s]l.%i" COLOR_RESET
                    ": No space before a comma,\n", files->path, (line +1));
            if (i < my_strlen(str))
                if (str[i + 1] != ' ' && str[i + 1] != '\n')
                    my_printf(COLOR_GREEN "[%s]l.%i" COLOR_RESET
                    ": Need a space after a comma,\n", files->path, (line + 1));
        }
        i = i + 1;
    }
}

void    check_comma(char **file, file_t *files)
{
    int i = 0;

    while (file[i] != NULL) {
        check_comma_of_this_line(file[i], files, i);
        i = i + 1;
    }
}
