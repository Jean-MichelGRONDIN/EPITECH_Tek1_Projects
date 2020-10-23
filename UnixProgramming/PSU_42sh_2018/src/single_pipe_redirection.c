/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** single pipe commande management
*/

#include "./../include/minishell.h"

void    single_pipe_redirection_part_two(int save_zero, int *n_wait, int *fd)
{
    int sig = 0;

    close(fd[0]);
    dup2(save_zero, 0);
    if (n_wait[0] > 0) {
        wait(&sig);
        signal_check(sig);
    }
    if (n_wait[1] > 0) {
        wait(&sig);
        signal_check(sig);
    }
}

char    **single_pipe_redirection(st_t st, char **tab)
{
    int save_one = dup(1);
    int save_zero = dup(0);
    int fd[2];
    int n_wait[2] = {-1, -1};

    pipe(fd);
    dup2(fd[1], 1);
    n_wait[0] = identify_the_input_pipe(st, tab[0]);
    close(fd[1]);
    dup2(fd[0], 0);
    dup2(save_one, 1);
    n_wait[1] = identify_the_input_pipe(st, tab[1]) != 0;
    single_pipe_redirection_part_two(save_zero, n_wait, fd);
    return (st.env);
}

char    **check_simple_pipe_redirection(st_t st, char **tab, char *str)
{
    if (my_strlen(str) == 1) {
        return (single_pipe_redirection(st, tab));
    } else if (my_strlen(str) == 2 && str[0] == str[1] &&
    my_strtab_len(tab) == 2) {
        return (double_pipe(st, tab));
    } else
        my_pstrerr("Invalid null command.\n");
    return (st.env);
}
