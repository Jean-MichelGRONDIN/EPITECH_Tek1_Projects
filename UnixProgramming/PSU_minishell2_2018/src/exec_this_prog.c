/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** exec this prog with fork to not exit the shell
*/

#include "./../include/minishell.h"

int exec_this_prog_pipe(char **args, char **env)
{
    pid_t   status = fork();

    if (status == 0) {
        execve(args[0], args, env);
        exit(0);
    }
    return (status);
}

int exec_this_prog(char **args, char **env)
{
    pid_t   status = fork();
    int sig = 0;

    if (status == 0) {
        if (execve(args[0], args, env) == -1)
            exit(84);
    }
    waitpid(status, &sig, 0);
    signal_check(sig);
    return (0);
}
