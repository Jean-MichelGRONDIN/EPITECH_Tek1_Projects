/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** do this one from my commands
*/

#include "./../include/minishell.h"

char    **do_my_command(st_t st)
{
    int i = 0;
    command_t   *commands = give_list_of_knowed_functions();

    while (commands[i].name != NULL) {
        if (my_strcmp(st.args[0], commands[i].name) == 0) {
            st.env = commands[i].exec(st);
            return (st.env);
        }
        i = i + 1;
    }
    return (st.env);
}
