/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** receive events
*/

#include "./../include/runner.h"

void    receive_events(sfRenderWindow *window,
    ground_t **player, sfEvent *event)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        user_actions(window, player[RUNNER], event);
    }
}
