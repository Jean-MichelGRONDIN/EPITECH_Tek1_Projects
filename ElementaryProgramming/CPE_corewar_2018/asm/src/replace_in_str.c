/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** replace_in_str
*/

#include "asm.h"

char    *replace_in_str_part(char *str, char c, char n)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            str[i] = n;
        i = i + 1;
    }
    return (str);
}

char    *replace_in_str(char *str, char c, char n)
{
    if (str != NULL)
        replace_in_str_part(str, c, n);
    return (str);
}