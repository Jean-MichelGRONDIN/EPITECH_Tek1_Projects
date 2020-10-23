/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** free the struct that containt the map
*/

#include "./../include/runner.h"

void    free_map(map_t *world)
{
    int i = 0;

    while (world->map[i] != NULL) {
        free(world->map[i]);
        i = i + 1;
    }
    free(world->map);
    free(world);
}
