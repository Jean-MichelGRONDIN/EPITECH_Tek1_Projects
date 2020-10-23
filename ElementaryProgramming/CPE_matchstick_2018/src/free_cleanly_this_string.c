/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** free cleanly this string ( and but it at NULL )
*/

#include "./../include/match.h"

char    *free_cleanly_this_string(char *str)
{
    if (str != NULL) {
        free(str);
        str = NULL;
    }
    return (str);
}
