/*
** EPITECH PROJECT, 2019
** PSU_42sh_2018
** File description:
** and_redirection
*/

#include "minishell.h"

char    **and_redirection(st_t st, char **tab)
{
    int sig = 0;

    if (identify_the_input_pipe(st, tab[0]) > 0) {
        wait(&sig);
        signal_check(sig);
        if (identify_the_input_pipe(st, tab[1]) > 0) {
            wait(&sig);
            signal_check(sig);
        }
    }
    return (st.env);
}

char    **check_and_redirection(st_t st, char **tab, char *str)
{
    if (my_strlen(str) == 2 && str[0] == str[1])
        return (and_redirection(st, tab));
    return (st.env);
}
