/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** identify the input or returned an error msg
*/

#include "./../include/minishell.h"

char    **identify_the_input(char **env, char *input)
{
    char    **args = my_str_to_word_array(input, " \t");

    if (is_this_one_of_my_commands(args) != 0)
        return (do_my_command(env, args));
    if (init_path_before_launch_researsh(env, args) == 1)
        return (env);
    my_printf("%s: Command not found.\n", args[0]);
    free_cleanly_str_tab(args);
    return (env);
}
