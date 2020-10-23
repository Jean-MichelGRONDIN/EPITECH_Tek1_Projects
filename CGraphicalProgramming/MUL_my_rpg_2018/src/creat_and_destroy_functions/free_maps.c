/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** free maps of the game
*/

#include "./../../include/rpg.h"

map_t   *free_this_map(map_t *map)
{
    map->map_pieces = free_map_pieces(map->map_pieces);
    map->col_pieces = free_map_pieces(map->col_pieces);
    free(map->map_state);
    map->map_state = NULL;
    sfVertexArray_destroy(map->map);
    sfVertexArray_destroy(map->col);
    map->map_tp = free_portals_list(map->map_tp);
    free(map);
    map = NULL;
    return (map);
}

all_maps_t  *free_maps(all_maps_t *maps)
{
    maps->overworld = free_this_map(maps->overworld);
    free(maps);
    maps = NULL;
    return (maps);
}