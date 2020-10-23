/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** if it can init the path before launch the research
*/

#include "./../include/minishell.h"
//attention a pas execve un dossier ou un fichier

int init_path_before_launch_researsh_pipe(char **env, char **args)
{
    int path_position = find_position_of_that_in_env(env, "PATH");
    char    **path = NULL;

    if (do_this_str_have_slash(args[0]) == 1) {
        if (do_him_exist(args[0]) == 1) {
            try_to_launch_this_pipe(my_strdup(args[0]), args, env);
            return (1);
        } else
            return (0);
    }
    if (path_position != -1) {
        path = my_str_to_word_array(env[path_position], "=:");
        return (searsh_this_command_in_path_pipe(env, args, path));
    }
    return (0);
}

int init_path_before_launch_researsh(char **env, char **args)
{
    int path_position = find_position_of_that_in_env(env, "PATH");
    char    **path = NULL;

    if (do_this_str_have_slash(args[0]) == 1) {
        if (do_him_exist(args[0]) == 1) {
            try_to_launch_this(my_strdup(args[0]), args, env);
            return (1);
        } else
            return (0);
    }
    if (path_position != -1) {
        path = my_str_to_word_array(env[path_position], "=:");
        return (searsh_this_command_in_path(env, args, path));
    }
    return (0);
}
