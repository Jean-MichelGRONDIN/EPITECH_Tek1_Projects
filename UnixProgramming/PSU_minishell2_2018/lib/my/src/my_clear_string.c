/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** for multiple same char stick together replace them by only one of them
*/

#include "./../include/my.h"
#include <stddef.h>

char    *clear_multiples(char *str, char *separator)
{
    int i = 0;
    char    *res = NULL;
    int remember = 0;

    while (str[i] != '\0') {
        remember = count_until_not_line_finisher(&(str[i]), separator);
        if (str[i] == separator[0]) {
            res = my_strcat(res, separator);
            i = i + remember;
        } else {
            res = my_char_str_cat(res, str[i]);
            i = i + 1;
        }
    }
    str = free_cleanly_this_str(str);
    return (res);
}

char    *clear_basic(char *str, char *separator)
{
    int i = count_until_not_line_finisher(str, separator);
    char    *res = NULL;
    int remember = 0;

    while (str[i] != '\0') {
        remember = count_until_not_line_finisher(&(str[i]), separator);
        if (str[i] == separator[0] && str[i + remember] != '\0') {
            res = my_strcat(res, separator);
            i = i + remember;
        } else if (str[i] == separator[0])
            i = i + remember;
        else {
            res = my_char_str_cat(res, str[i]);
            i = i + 1;
        }
    }
    str = free_cleanly_this_str(str);
    return (res);
}

char    *choose_clear_mode(char *str, char separator, int mode)
{
    char    *one_sep = my_char_str_cat(NULL, separator);
    char    *res = NULL;

    if (mode != 0) {
        res = clear_multiples(str, one_sep);
        one_sep = free_cleanly_this_str(one_sep);
        return (res);
    }
    res = clear_basic(str, one_sep);
    one_sep = free_cleanly_this_str(one_sep);
    return (res);
}

char    *my_clear_string(char *str, char separator, int mode)
{
    if (str == NULL || mode < 0 || mode > 1)
        return (str);
    return (choose_clear_mode(str, separator, mode));
}
