/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** deplace the user in files
*/

#include "./../include/minishell.h"
// quand y'a des '~'
char    **my_cd(char **env, char **args)
{
    int nb_args = my_strtab_len(args);

    if (nb_args > 2) {
        my_pstrerr("cd: Too many arguments.\n");
        return (env);
    }
    if (nb_args == 1) {
        env = go_to_the_user_home(env);
    }
    if (nb_args == 2) {
        if (my_strcmp(args[1], "-") == 0)
            env = cd_return_in_past(env);
        else if (my_strcmp(args[1], "--") == 0)
            env = go_to_the_user_home(env);
        else
            env = try_go_in_this_path(env, args[1]);
    }
    return (env);
}
