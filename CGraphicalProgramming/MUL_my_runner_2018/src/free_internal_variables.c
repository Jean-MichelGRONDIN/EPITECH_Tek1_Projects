/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** free internal variable of a game loop
*/

#include "./../include/runner.h"

void    free_internal_variables(sfEvent *event,
    my_clock_t **time, rulers_t *rules)
{
    free(event);
    free_clocks(time);
    free_rules(rules);
}
