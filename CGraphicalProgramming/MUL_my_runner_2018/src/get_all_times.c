/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** get time from all clocks
*/

#include "./../include/runner.h"

my_clock_t  **get_all_times(my_clock_t **time)
{
    int i = 0;

    while (i != NB_CLOCK) {
        time[i] = get_time(time[i]);
        i = i + 1;
    }
    return (time);
}
