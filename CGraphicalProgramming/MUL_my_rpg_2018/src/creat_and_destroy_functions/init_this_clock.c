/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** initialise a clock in a structure
*/

#include "./../../include/rpg.h"

my_clock_t  *init_this_clock(void)
{
    my_clock_t  *time = malloc(sizeof(*time));

    time->clock = sfClock_create();
    time->seconds = 0.0;
    return (time);
}
