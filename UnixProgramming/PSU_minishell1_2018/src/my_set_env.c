/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** set somethign in env
*/

#include "./../include/minishell.h"

char    **my_set_env(char **env, char **args)
{
    int nb_args = my_strtab_len(args);
    char    *tmp = NULL;
    char    *finale = NULL;

    if (nb_args > 3) {
        my_putstr("setenv: Too many arguments.\n");
        return (env);
    }
    if (nb_args == 1)
        return (print_env(env, args));
    if (check_setenv_obj_name_syntax(args[1]) == 1)
        return (env);
    if (nb_args == 2)
        finale = my_assemble_str(args[1], "=");
    if (nb_args == 3) {
        tmp = my_assemble_str(args[1], "=");
        finale = my_assemble_str(tmp, args[2]);
        free_cleanly_this_str(tmp);
    }
    return (already_exist_or_new(env, args, finale));
}
