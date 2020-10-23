/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** return a list of all functions coded of this shell
*/

#include "./../include/minishell.h"

command_t   *give_list_of_knowed_functions(void)
{
    command_t   *com = malloc(sizeof(command_t) * 6);

    com[0].name = my_strdup("cd");
    com[0].exec = &my_cd;
    com[1].name = my_strdup("env");
    com[1].exec = &print_env;
    com[2].name = my_strdup("setenv");
    com[2].exec = &my_set_env;
    com[3].name = my_strdup("unsetenv");
    com[3].exec = &my_unset_env;
    com[4].name = my_strdup("exit");
    com[4].exec = &my_exit_shell;
    com[5].name = NULL;
    com[5].exec = NULL;
    return (com);
}
