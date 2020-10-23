/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** return 1 if this is one of my commandes and 0 if not
*/

#include "./../include/minishell.h"

int is_this_one_of_my_commands(char **args)
{
    int i = 0;
    command_t   *commands = give_list_of_knowed_functions();

    while (commands[i].name != NULL) {
        if (my_strcmp(args[0], commands[i].name) == 0) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
