/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** function that manages deplacement linked to entries
*/

#include "./../include/sokoban.h"

world_t *manage_entrie(world_t *world, int ch)
{
    if (ch == ' ')
        reset_the_map(world);
    if (ch == KEY_UP && world->map[world->y - 1][world->x] != '#')
        world = go_up(world);
    if (ch == KEY_DOWN && world->map[world->y + 1][world->x] != '#')
        world = go_down(world);
    if (ch == KEY_LEFT && world->map[world->y][world->x - 1] != '#')
        world = go_left(world);
    if (ch == KEY_RIGHT && world->map[world->y][world->x + 1] != '#')
        world = go_right(world);
    world = check_all_o(world);
    print_map(world);
    return (world);
}
