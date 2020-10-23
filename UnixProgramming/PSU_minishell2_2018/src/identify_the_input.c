/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** identify the input or returned an error msg
*/

#include "./../include/minishell.h"

int identify_the_input_pipe(char **env, char *input)
{
    char    **args = my_str_to_word_array(input, " \t");
    int ret = -1;

    if (is_this_one_of_my_commands(args) != 0) {
        do_my_command(env, args);
        return (0);
    }
    if ((ret = init_path_before_launch_researsh_pipe(env, args)) > 0)
        return (ret);
    my_pstrerr(args[0]);
    my_pstrerr(": Command not found.\n");
    args = free_cleanly_str_tab(args);
    return (0);
}

char    **identify_the_input(char **env, char *input)
{
    char    **args = my_str_to_word_array(input, " \t");

    if (is_this_one_of_my_commands(args) != 0)
        return (do_my_command(env, args));
    if (init_path_before_launch_researsh(env, args) == 1)
        return (env);
    my_pstrerr(args[0]);
    my_pstrerr(": Command not found.\n");
    args = free_cleanly_str_tab(args);
    return (env);
}
