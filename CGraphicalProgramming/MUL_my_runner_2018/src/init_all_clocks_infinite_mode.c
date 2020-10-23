/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** initialise all clocks
*/

#include "./../include/runner.h"

my_clock_t  **init_all_clocks_infinite_mode(void)
{
    my_clock_t  **time = malloc(sizeof(my_clock_t *) * NB_CLOCK);
    int i = 0;

    while (i != NB_CLOCK) {
        time[i] = init_this_clock();
        i = i + 1;
    }
    return (time);
}
