/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** check if pid is right
*/

#include "./../include/navy.h"

int pid_errors(void)
{
    if (kill(data.pid, SIGUSR1) == -1) {
        my_pstrerr("Error No player at this pid !\n");
        return (1);
    }
    return (0);
}
