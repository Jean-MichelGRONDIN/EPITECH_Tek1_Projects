/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** copy the env and return it
*/

#include "./../include/minishell.h"

char    **copy_the_env(char **env)
{
    int nb_line = my_strtab_len(env);
    char    **my_env = malloc(sizeof(char *) * (nb_line + 1));
    int i = 0;

    while (i != nb_line) {
        my_env[i] = my_strdup(env[i]);
        i = i + 1;
    }
    my_env[i] = NULL;
    return (my_env);
}
