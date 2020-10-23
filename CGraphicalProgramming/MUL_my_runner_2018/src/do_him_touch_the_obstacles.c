/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** check if he touch the obstacle
*/

#include "./../include/runner.h"

void    do_he_touch_that(ground_t *player, ground_t *obstacle, rulers_t *rules)
{
    int player_foot = player->position.y + player->rect.height;
    int player_len = player->position.x + player->rect.width - 175;

    if (obstacle->position.x < player_len &&
        obstacle->position.x > (player->position.x + 50)) {
        if (player_foot > obstacle->position.y) {
            rules->lose = 1;
        }
    }
}

void    do_him_touch_the_obstacles(ground_t *player, ground_t **obstacles,
    rulers_t *rules)
{
    int i = 0;

    while (i != NB_OBS) {
        if (obstacles[i]->activate == 1) {
            do_he_touch_that(player, obstacles[i], rules);
        }
        i = i + 1;
    }
}
