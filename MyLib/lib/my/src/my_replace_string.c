/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** replace a string given as paramater by another given
*/

#include "./../include/my.h"
#include <stddef.h>

char    *replace_part(char *str, char *old, char *new)
{
    int i = 0;
    char    *res = NULL;

    while (str[i] != '\0') {
        if (my_strncmp(&(str[i]), old, my_strlen(old)) == 0 && new == NULL)
            i = i + my_strlen(old);
        else if (my_strncmp(&(str[i]), old, my_strlen(old)) == 0) {
            res = my_strcat(res, new);
            i = i + my_strlen(old);
        } else {
            res = my_char_str_cat(res, str[i]);
            i = i + 1;
        }
    }
    str = free_cleanly_this_str(str);
    return (res);
}

char    *my_replace_string(char *str, char *old, char *new)
{
    if (str == NULL && old == NULL) {
        if (new != NULL)
            return (my_strdup(new));
        else
            return (str);
    }
    if (str == NULL || old == NULL)
        return (str);
    return (replace_part(str, old, new));
}
