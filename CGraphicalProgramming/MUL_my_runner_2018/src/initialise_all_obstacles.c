/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** initialise all the obstacles objects
*/

#include "./../include/runner.h"

ground_t    **initialise_all_obstacles(void)
{
    ground_t    **obstacle = malloc(sizeof(ground_t *) * NB_OBS);
    int i = 0;

    while (i != NB_OBS) {
        obstacle[i] = malloc(sizeof(ground_t));
        i = i + 1;
    }
    obstacle[ANCHOR] = init_anchor(obstacle[ANCHOR]);
    obstacle[BARREL1] = init_barrel1(obstacle[BARREL1]);
    obstacle[BARREL2] = init_barrel2(obstacle[BARREL2]);
    obstacle[BOMB] = init_bomb(obstacle[BOMB]);
    obstacle[STEERING_WHEEL] = init_wheel(obstacle[STEERING_WHEEL]);
    obstacle[STONE1] = init_stone1(obstacle[STONE1]);
    obstacle[STONE2] = init_stone2(obstacle[STONE2]);
    obstacle[STONE3] = init_stone3(obstacle[STONE3]);
    obstacle[STONE4] = init_stone4(obstacle[STONE4]);
    obstacle[STONE5] = init_stone5(obstacle[STONE5]);
    return (obstacle);
}
