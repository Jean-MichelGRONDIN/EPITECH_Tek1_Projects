/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** default action of the usr 1 signal
*/

#include "./../include/navy.h"

void    init_basic_sigaction_usr_1(void)
{
    struct  sigaction act;

    act.sa_sigaction = &basic_sig_usr_1;
    act.sa_flags = SA_SIGINFO;
    sigaction(10, &act, NULL);
}

void    basic_sig_usr_1(int sig, siginfo_t *sinfo, void *info)
{
    (void)sig;
    (void)info;
    if (data.pid == -1)
        data.pid = sinfo->si_pid;
    data.a = data.a + 1;
    my_printf("a + 1\n");
}
