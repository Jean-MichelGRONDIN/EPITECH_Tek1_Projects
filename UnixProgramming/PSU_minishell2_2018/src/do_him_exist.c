/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** find if this file exist
*/

#include "./../include/minishell.h"

int do_him_exist(char *str)
{
    if (access(str, F_OK) == 0)
        return (1);
    return (0);
}
