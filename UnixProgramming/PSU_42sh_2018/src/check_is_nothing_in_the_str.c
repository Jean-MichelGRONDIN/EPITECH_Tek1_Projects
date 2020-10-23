/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** check is in this str there something else than space and tab
*/

#include "./../include/minishell.h"

int check_if_nothing_in_the_str_v2(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t' &&
            str[i] != '<' && str[i] != '>' &&
            str[i] != ';' && str[i] != '|')
            return (1);
        i = i + 1;
    }
    return (0);
}

int check_if_nothing_in_the_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t')
            return (1);
        i = i + 1;
    }
    return (0);
}
