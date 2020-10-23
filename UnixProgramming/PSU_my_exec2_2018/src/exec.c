/*
** EPITECH PROJECT, 2019
** PSU_my_exec2_2018
** File description:
** exec programes list with pipes
*/

#include "./../include/my.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

void    exec_this_command(char *cm, char **env)
{
    char **command = my_str_to_word_array(cm, " \t");

    execve(command[0], command, env);
    command = free_cleanly_str_tab(command);
    exit(84);
}

void    do_that_command(char **env, char **cms, int i, int last_input)
{
    int fds[2];
    fds[0] = 0;
    fds[1] = 0;
    pipe(fds);
    int pid = fork();

    if (pid == 0) {
        close(fds[0]);
        if (i > 0)
            dup2(last_input, 0);
        if (cms[i + 1] != NULL)
            dup2(fds[1], 1);
        exec_this_command(cms[i], env);
    }
    waitpid(pid, NULL, 0);
    if (cms[i + 1] != NULL) {
        close(fds[1]);
        do_that_command(env, cms, (i + 1), fds[0]);
    }
    if (last_input > 0)
        close(fds[0]);
}

int exec(int ac, char **av, char **env)
{
    int i = 0;
    char    **tab = my_str_to_word_array(av[1], "|");

    do_that_command(env, tab, i, 0);
    return (0);
}
