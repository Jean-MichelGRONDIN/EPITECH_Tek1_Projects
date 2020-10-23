/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** function that free the map
*/

#include "./../include/sokoban.h"

world_t *free_the_map(world_t *world)
{
    int i = 0;

    while (i != world->y_max) {
        free(world->map[i]);
        i = i + 1;
    }
    free(world->map);
    world->map = NULL;
    return (world);
}
