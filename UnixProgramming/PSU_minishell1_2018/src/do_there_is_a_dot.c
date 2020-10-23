/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** do there is a dot in this string
*/

#include "./../include/minishell.h"

int do_there_is_a_dot(char *str)
{
    int i  = 0;

    while (str[i] != '\0') {
        if (str[i] == '.') {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
