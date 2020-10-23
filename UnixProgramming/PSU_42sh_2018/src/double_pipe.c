/*
** EPITECH PROJECT, 2019
** PSU_42sh
** File description:
** double_pipe
*/

#include "./../include/minishell.h"

char    **double_pipe(st_t st, char **tab)
{
    int sig = 0;

    if (identify_the_input_pipe(st, tab[0]) > 0) {
        wait(&sig);
        signal_check(sig);
    } else if (identify_the_input_pipe(st, tab[1]) > 0) {
        wait(&sig);
        signal_check(sig);
    }
    return (st.env);
}
