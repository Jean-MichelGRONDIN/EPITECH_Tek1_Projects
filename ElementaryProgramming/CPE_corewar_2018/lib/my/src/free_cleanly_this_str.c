/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** free cleanly this string
*/

#include "./../include/my.h"
#include <stdlib.h>

char    *free_cleanly_this_str(char *str)
{
    if (str != NULL) {
        free(str);
        str = NULL;
    }
    return (str);
}
