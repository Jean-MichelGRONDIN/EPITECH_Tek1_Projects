/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** first player part
*/

#include "./../../include/navy.h"

void    init_connect_first_player_sigaction(void)
{
    struct  sigaction act;

    act.sa_sigaction = &connect_first_player;
    act.sa_flags = SA_SIGINFO;
    sigaction(12, &act, NULL);
}

int first_player(void)
{
    int i = 0;

    init_connect_first_player_sigaction();
    my_printf("waiting for enemy connection...\n\n");
    pause();
    while (i != 6) {
        pause();
        i = i + 1;
    }
    if (data.a != 6 || data.activate == -1)
        return (84);
    my_printf("enemy connected\n");
    usleep(5000);
    kill(data.pid, SIGUSR1);
    return (0);
}
