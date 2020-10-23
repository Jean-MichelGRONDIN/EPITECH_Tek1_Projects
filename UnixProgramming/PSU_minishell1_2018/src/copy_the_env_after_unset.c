/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** copy the env without the removed part
*/

#include "./../include/minishell.h"

char    **copy_the_env_after_unset(char **env, int nb)
{
    int len = my_strtab_len(env) - nb;
    char    **new_env = malloc(sizeof(char *) * (len + 1));
    int i_old = 0;
    int i_new = 0;

    while (env[i_old] != NULL) {
        if (env[i_old][0] != '\0') {
            new_env[i_new] = my_strdup(env[i_old]);
            i_new = i_new + 1;
        }
        i_old = i_old + 1;
    }
    new_env[i_new] = NULL;
    free_cleanly_str_tab(env);
    return (new_env);
}
