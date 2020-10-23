/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** concatenate a char at the end of a string
*/

#include "./../include/my.h"
#include <stdlib.h>

char    *my_char_str_cat(char *str, char c)
{
    char    *tmp = malloc(sizeof(char) * 2);

    tmp[0] = c;
    tmp[1] = '\0';
    str = my_strcat(str, tmp);
    tmp = free_cleanly_this_str(tmp);
    return (str);
}
