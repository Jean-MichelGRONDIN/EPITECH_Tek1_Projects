/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** remove this from the env
*/

#include "./../include/minishell.h"

char    **remove_this_from_the_env(char **env, char *str, int *nb_time)
{
    int pos = find_position_of_that_in_env(env, str);

    if (pos >= 0) {
        env[pos] = free_cleanly_this_str(env[pos]);
        env[pos] = malloc(sizeof(char) * 1);
        env[pos][0] = '\0';
        *nb_time = *nb_time + 1;
    }
    return (env);
}
