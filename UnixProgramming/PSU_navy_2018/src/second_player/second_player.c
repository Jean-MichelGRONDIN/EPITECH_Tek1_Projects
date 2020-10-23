/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** second player part
*/

#include "./../../include/navy.h"

void    init_receive_connection_sigaction(void)
{
    struct  sigaction act;

    act.sa_sigaction = &receive_connection;
    act.sa_flags = SA_SIGINFO;
    sigaction(12, &act, NULL);
}

int second_player(void)
{
    int i = 0;

    init_receive_connection_sigaction();
    usleep(5000);
    kill(data.pid, SIGUSR2);
    while (i != 5) {
        usleep(5000);
        kill(data.pid, SIGUSR1);
        i = i + 1;
    }
    if (data.b == 1 && data.a == 1) {
        my_printf("successfully connected\n");
        return (0);
    } else
        return (84);
}
