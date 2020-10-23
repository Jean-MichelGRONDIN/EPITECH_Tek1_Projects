/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** get the time from the clock
*/

#include "./../include/defender.h"

my_clock_t *get_time(my_clock_t *time)
{
    time->time = sfClock_getElapsedTime(time->clock);
    time->seconds = time->time.microseconds / 1000000.0;
    return (time);
}
