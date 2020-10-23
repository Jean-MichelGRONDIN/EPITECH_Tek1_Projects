/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check space or \n after comma
*/

#include "./../include/my_norm.h"

void    check_equal_of_this_line(char *str, file_t *files, int line)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '=') {
            if (i > 0)
                if (my_is_in(str[i - 1], " =+-%*!<>\n") == 0)
                    my_printf(COLOR_GREEN "[%s]l.%i" COLOR_RESET
                    ": Need a space before '=',(exept criterion calls)\n",
                    files->path, (line +1));
            if (i < my_strlen(str))
                if (my_is_in(str[i + 1], " =\n") == 0)
                    my_printf(COLOR_GREEN "[%s]l.%i" COLOR_RESET
                    ": Need a space after '=',(exept criterion calls)\n",
                    files->path, (line + 1));
        }
        i = i + 1;
    }
}

void    check_equal(char **file, file_t *files)
{
    int i = 0;

    while (file[i] != NULL) {
        check_equal_of_this_line(file[i], files, i);
        i = i + 1;
    }
}
