/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** draw vertex maps
*/

#include "./../../include/rpg.h"

map_t   *draw_this_map(map_t *map, sfRenderWindow *window)
{
    sfRenderWindow_drawVertexArray(window, map->map, map->map_state);
    return (map);
}

rpg_t   *draw_maps(rpg_t *rpg, sfRenderWindow *window)
{
    draw_this_map(rpg->maps->overworld, window);
    return (rpg);
}
