/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** check if in this string there is only exit allowed chars
*/

#include "./../include/minishell.h"

int check_if_there_is_only_exit_allowed_chars(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-') {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
