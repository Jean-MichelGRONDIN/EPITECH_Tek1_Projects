/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** do this already exist in the env or it is new
*/

#include "./../include/minishell.h"

char    **already_exist_or_new(char **env, char **args, char *obj)
{
    int pos = -1;

    if ((pos = find_position_of_that_in_env(env, args[1])) >= 0) {
        env[pos] = my_strdup(obj);
        free_cleanly_this_str(obj);
        return (env);
    }
    env = add_this_to_the_env(env, obj);
    free_cleanly_this_str(obj);
    return (env);
}
