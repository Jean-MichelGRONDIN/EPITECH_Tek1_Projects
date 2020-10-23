/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** print basic info name and nb args
*/

#include "./../include/minishell.h"

void    print_baisc_informations(char **args)
{
    my_putstr("Program name: ");
    my_putstr(args[0]);
    my_putchar('\n');
    while (args[i] != 0) {
        i = i + 1;
    }
}
