/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** exec this prog with fork to not exit the shell
*/

#include "./../include/minishell.h"

int exec_this_prog_pipe(st_t st)
{
    pid_t   status = fork();

    if (status == 0) {
        execve(st.args[0], st.args, st.env);
        exit(0);
    }
    return (status);
}

int exec_this_prog(st_t st)
{
    pid_t   status = fork();
    int sig = 0;

    if (status == 0) {
        if (execve(st.args[0], st.args, st.env) == -1)
            exit(84);
    }
    waitpid(status, &sig, 0);
    signal_check(sig);
    return (0);
}
