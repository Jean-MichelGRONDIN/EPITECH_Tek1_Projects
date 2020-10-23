/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** default action of the usr 1 signal
*/

#include "./../include/navy.h"

void    init_basic_sigaction_usr_2(void)
{
    struct  sigaction act;

    act.sa_sigaction = &basic_sig_usr_2;
    act.sa_flags = SA_SIGINFO;
    sigaction(12, &act, NULL);
}

void    basic_sig_usr_2(int sig, siginfo_t *sinfo, void *info)
{
    (void)sig;
    (void)info;
    if (data.pid == -1)
        data.pid = sinfo->si_pid;
    data.b = data.b + 1;
    my_printf("b + 1\n");
}
