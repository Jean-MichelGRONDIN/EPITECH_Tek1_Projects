/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** receive that player 1 is connected
*/

#include "./../../include/navy.h"

void    receive_connection(int sig, siginfo_t *sinfo, void *info)
{
    (void)sig;
    (void)info;
    if (data.pid == -1)
        data.pid = sinfo->si_pid;
    data.b = data.b + 1;
}
