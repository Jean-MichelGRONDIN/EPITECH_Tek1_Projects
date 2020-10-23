/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** protocole to connect the first player
*/

#include "./../../include/navy.h"

void    connect_first_player(int sig, siginfo_t *sinfo, void *info)
{
    (void)sig;
    (void)info;
    if (data.pid == -1)
        data.pid = sinfo->si_pid;
    if (data.activate == -1) {
        data.activate = 1;
        data.a = 0;
        data.b = 0;
    }
}
