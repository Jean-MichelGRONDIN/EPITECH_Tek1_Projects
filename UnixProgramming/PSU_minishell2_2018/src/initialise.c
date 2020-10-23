/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** initialise variables needed
*/

#include "./../include/minishell.h"

int initialise(char **env)
{
    char    **my_env = copy_the_env(env);
    char    *str = NULL;

    while (1) {
        free_cleanly_this_str(str);
        str = get_input();
        if (str == NULL)
            return (0);
        if (check_if_nothing_in_the_str(str) == 1)
            my_env = separate_all_commands(my_env, str);
    }
    return (0);
}
