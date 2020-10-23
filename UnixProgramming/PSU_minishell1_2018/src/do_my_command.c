/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** do this one from my commands
*/

#include "./../include/minishell.h"

char    **do_my_command(char **env, char **args)
{
    int i = 0;
    command_t   *commands = give_list_of_knowed_functions();

    while (commands[i].name != NULL) {
        if (my_strcmp(args[0], commands[i].name) == 0) {
            env = commands[i].exec(env, args);
            return (env);
        }
        i = i + 1;
    }
    return (env);
}
