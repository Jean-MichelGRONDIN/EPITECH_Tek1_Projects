/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** free all clocks
*/

#include "./../include/runner.h"

void    free_this_clock(my_clock_t *time)
{
    sfClock_destroy(time->clock);
}

void    free_clocks(my_clock_t **time)
{
    int i = 0;

    while (i != NB_CLOCK) {
        free_this_clock(time[i]);
        free(time[i]);
        i = i + 1;
    }
    free(time);
}
