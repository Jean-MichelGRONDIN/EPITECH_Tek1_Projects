/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** print the environment
*/

#include "./../include/minishell.h"

char    **print_env(char **env, char **args)
{
    int nb_args = my_strtab_len(args);
    int i = 0;

    if (nb_args >= 2) {
        my_printf("env: ‘%s’: No such file or directory\n", args[1]);
        return (env);
    }
    while (env[i] != NULL) {
        my_putstr(env[i]);
        my_putchar('\n');
        i = i + 1;
    }
    return (env);
}
