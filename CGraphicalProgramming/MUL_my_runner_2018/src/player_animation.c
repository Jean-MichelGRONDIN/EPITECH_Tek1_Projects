/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** manage the animation of the player an draw it
*/

#include "./../include/runner.h"

void    player_animation(sfRenderWindow *window,
    ground_t **player, my_clock_t **time)
{
    if (time[PERSON]->seconds >= 0.15) {
        player[RUNNER]->move(player[RUNNER]);
        sfClock_restart(time[PERSON]->clock);
    }
    sfRenderWindow_drawSprite(window, player[RUNNER]->sprite, NULL);
}
