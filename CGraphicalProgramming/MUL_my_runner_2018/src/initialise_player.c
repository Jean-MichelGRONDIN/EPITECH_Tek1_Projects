/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** initialise the player textures
*/

#include "./../include/runner.h"

ground_t    **initialise_all_players_object(void)
{
    ground_t    **player = malloc(sizeof(ground_t *));

    player[RUNNER] = malloc(sizeof(ground_t));
    player[RUNNER] = init_runner_part(player[RUNNER]);
    return (player);
}
