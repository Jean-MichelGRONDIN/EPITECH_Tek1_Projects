/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** exec this prog with fork to not exit the shell
*/

#include "./../include/minishell.h"

int exec_this_prog(char **args, char **env)
{
    pid_t   status = fork();

    if (status == 0) {
        execve(args[0], args, env);
    }
    wait(NULL);
    return (0);
}
