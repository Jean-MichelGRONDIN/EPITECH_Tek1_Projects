/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** if it can init the path before launch the research
*/

#include "./../include/minishell.h"
//attention a pas execve un dossier ou un fichier

int init_path_before_launch_researsh_pipe(st_t st)
{
    int path_position = find_position_of_that_in_env(st.env, "PATH");
    char    **path = NULL;

    if (do_this_str_have_slash(st.args[0]) == 1) {
        if (do_him_exist(st.args[0]) == 1) {
            try_to_launch_this_pipe(my_strdup(st.args[0]), st);
            return (1);
        } else
            return (0);
    }
    if (path_position != -1) {
        path = my_str_to_word_array(st.env[path_position], "=:");
        return (searsh_this_command_in_path_pipe(st, path));
    }
    return (0);
}

int init_path_before_launch_researsh(st_t st)
{
    int path_position = find_position_of_that_in_env(st.env, "PATH");
    char    **path = NULL;

    if (do_this_str_have_slash(st.args[0]) == 1) {
        if (do_him_exist(st.args[0]) == 1) {
            try_to_launch_this(my_strdup(st.args[0]), st);
            return (1);
        } else
            return (0);
    }
    if (path_position != -1) {
        path = my_str_to_word_array(st.env[path_position], "=:");
        return (searsh_this_command_in_path(st, path));
    }
    return (0);
}
