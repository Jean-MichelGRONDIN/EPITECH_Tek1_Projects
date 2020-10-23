/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** check if the game is over
*/

#include "./../include/match.h"

int is_it_over(char *sticks, int nb_line)
{
    int i  = 0;

    while (i != (nb_line + 2)) {
        if (sticks[i] != 0) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
