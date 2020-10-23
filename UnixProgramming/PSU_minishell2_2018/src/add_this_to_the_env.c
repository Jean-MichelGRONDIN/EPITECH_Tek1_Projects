/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** add this to the env
*/

#include "./../include/minishell.h"

char    **add_this_to_the_env(char **env, char *to_add)
{
    int nb_line = my_strtab_len(env);
    int i = 0;
    char    **new_env = malloc(sizeof(char *) * (nb_line + 2));

    while (env[i] != NULL) {
        new_env[i] = my_strdup(env[i]);
        i = i + 1;
    }
    new_env[i] = my_strdup(to_add);
    new_env[i + 1] = NULL;
    free_cleanly_str_tab(env);
    return (new_env);
}
