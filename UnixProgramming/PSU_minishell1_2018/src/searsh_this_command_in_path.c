/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** research a commande in the path
*/

#include "./../include/minishell.h"

int searsh_this_command_in_path(char **my_env, char **args, char **path)
{
    int i  = 0;
    char    *test = NULL;
    char    *tmp = NULL;

    while (path[i] != NULL) {
        tmp = my_assemble_str(path[i], "/");
        test = my_assemble_str(tmp, args[0]);
        tmp = free_cleanly_this_str(tmp);
        if (do_him_exist(test) == 1) {
            try_to_launch_this(test, args, my_env);
            return (1);
        }
        test = free_cleanly_this_str(test);
        i = i + 1;
    }
    free_cleanly_str_tab(path);
    return (0);
}
