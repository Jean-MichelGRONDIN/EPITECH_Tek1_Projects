/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** try to launch this file/prog
*/

#include "./../include/minishell.h"

int try_to_launch_this(char *str, char **args, char **my_env)
{
    if (access(str, X_OK) == 0) {
        args[0] = free_cleanly_this_str(args[0]);
        args[0] = my_strdup(str);
        exec_this_prog(args, my_env);
    } else
        my_printf("%s: Permission denied.\n", args[0]);
    args = free_cleanly_str_tab(args);
    str = free_cleanly_this_str(str);
    return (0);
}
