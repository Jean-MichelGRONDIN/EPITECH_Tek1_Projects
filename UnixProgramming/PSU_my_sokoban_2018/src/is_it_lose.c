/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** check if a x is blocked
*/

#include "./../include/sokoban.h"

int can_it_block(char c)
{
    if (c == '#' || c == 'X') {
        return (1);
    }
    return (0);
}

int is_x_blocked(world_t *world, int i)
{
    int y = world->x_pos[i][0];
    int x = world->x_pos[i][1];

    if (can_it_block(world->map[y - 1][x]) == 1)
        if (can_it_block(world->map[y][x + 1]) == 1)
            return (1);
    if (can_it_block(world->map[y + 1][x]) == 1)
        if (can_it_block(world->map[y][x + 1]) == 1)
            return (1);
    if (can_it_block(world->map[y - 1][x]) == 1)
        if (can_it_block(world->map[y][x - 1]) == 1)
            return (1);
    if (can_it_block(world->map[y + 1][x]) == 1)
        if (can_it_block(world->map[y][x - 1]) == 1)
            return (1);
    return (0);
}

int is_it_lose(world_t *world)
{
    int i = 0;
    int res = 0;

    world = find_x_position(world, 0, -1);
    while (i != world->nb_x) {
        if (is_x_blocked(world, i) == 1) {
            res = res + 1;
        }
        i = i + 1;
    }
    if (res == world->nb_x) {
        return (1);
    }
    return (0);
}
