/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** free args from usual game loop
*/

#include "./../include/runner.h"

void    free_args_from_usual(ground_t **backg, ground_t **player,
    ground_t **obstacles, map_t *world)
{
    free_map(world);
    free_ground_struct(backg, MAX);
    free_ground_struct(player, 1);
    free_ground_struct(obstacles, NB_OBS);
}
