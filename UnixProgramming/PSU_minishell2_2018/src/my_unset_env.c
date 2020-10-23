/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** unset somethign from the env
*/

#include "./../include/minishell.h"

char    **my_unset_env(char **env, char **args)
{
    int nb_args = my_strtab_len(args);
    int i = 1;
    int nb = 0;

    if (nb_args == 1)
        my_pstrerr("unsetenv: Too few arguments.\n");
    while (args[i] != NULL) {
        env = remove_this_from_the_env(env, args[i], &nb);
        i = i + 1;
    }
    if (nb > 0)
        env = copy_the_env_after_unset(env, nb);
    return (env);
}
