/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** if this str conaint the '/' char return 1 or else 0
*/

#include "./../include/minishell.h"

int do_this_str_have_slash(char *str)
{
    int i  = 0;

    while (str[i] != '\0') {
        if (str[i] == '/') {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
