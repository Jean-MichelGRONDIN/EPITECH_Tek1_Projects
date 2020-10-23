/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** research a commande in the path
*/

#include "./../include/minishell.h"

int searsh_this_command_in_path_pipe(st_t st, char **path)
{
    int i  = 0;
    char    *test = NULL;
    char    *tmp = NULL;

    while (path[i] != NULL) {
        tmp = my_assemble_str(path[i], "/");
        test = my_assemble_str(tmp, st.args[0]);
        tmp = free_cleanly_this_str(tmp);
        if (do_him_exist(test) == 1) {
            try_to_launch_this_pipe(test, st);
            return (1);
        }
        test = free_cleanly_this_str(test);
        i = i + 1;
    }
    free_cleanly_str_tab(path);
    return (0);
}

int searsh_this_command_in_path(st_t st, char **path)
{
    int i  = 0;
    char    *test = NULL;
    char    *tmp = NULL;

    while (path[i] != NULL) {
        tmp = my_assemble_str(path[i], "/");
        test = my_assemble_str(tmp, st.args[0]);
        tmp = free_cleanly_this_str(tmp);
        if (do_him_exist(test) == 1) {
            try_to_launch_this(test, st);
            return (1);
        }
        test = free_cleanly_this_str(test);
        i = i + 1;
    }
    free_cleanly_str_tab(path);
    return (0);
}
