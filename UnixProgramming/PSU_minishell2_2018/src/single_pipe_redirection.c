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

char    **single_pipe_redirection(char **env, char **tab, char *str)
{
    int save_one = dup(1);
    int save_zero = dup(0);
    int fd[2];
    int n_wait[2];

    n_wait[0] = -1;
    n_wait[1] = -1;
    if (my_strlen(str) != 1) {
        my_pstrerr("Double \'|\' not supported !\n");
        return (env);
    }
    pipe(fd);
    dup2(fd[1], 1);
    n_wait[0] = identify_the_input_pipe(env, tab[0]);
    close(fd[1]);
    dup2(fd[0], 0);
    dup2(save_one, 1);
    n_wait[1] = identify_the_input_pipe(env, tab[1]) != 0;
    single_pipe_redirection_part_two(save_zero, n_wait, fd);
    return (env);
}
