/*
** EPITECH PROJECT, 2019
** give me this in env
** File description:
** give me this in env
*/

#include "./../include/minishell.h"

char *give_me_this_in_env(char **env, char *arg)
{
    int pos = find_position_of_that_in_env(env, arg);
    char *res = NULL;

    if (pos == -1)
        return (NULL);
    res = my_strdup(env[pos]);
    for (int count = 0; res[count]; count++)
        if (res[count] == '=') {
            res = my_strdup(&res[count + 1]);
            break;
        }
    return (res);
}
