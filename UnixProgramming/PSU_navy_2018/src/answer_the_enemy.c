/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** answer the enemy if he hit or missed
*/

#include "./../include/navy.h"

void    answer_the_enemy(char res)
{
    usleep(5000);
    if (res == -1)
        kill(data.pid, SIGUSR1);
    else if (res == 1)
        kill(data.pid, SIGUSR2);
}
