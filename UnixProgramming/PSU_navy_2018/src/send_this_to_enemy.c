/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** send this to enemy thank to signals
*/

#include "./../include/navy.h"

int send_this_to_enemy(int n)
{
    int i = 0;

    n = n == 0 ? 1 : n;
    usleep(5000);
    kill(data.pid, SIGUSR2);
    usleep(500);
    while (i != n) {
        kill(data.pid, SIGUSR1);
        usleep(500);
        i = i + 1;
    }
    kill(data.pid, SIGUSR2);
    return (0);
}
