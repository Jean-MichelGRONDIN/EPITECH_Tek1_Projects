/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init all maps
*/

#include "./../../include/rpg.h"

map_t   *init_overworld(void)
{
    map_t   *overworld = malloc(sizeof(*overworld));

    overworld->map_pieces = get_map_from_file("./maps/overworld.txt");
    overworld->col_pieces = get_map_from_file("./maps/overworld_col.txt");
    overworld->map_state = init_map_states("./assets/tileset.png");
    overworld->map_tp = init_overworld_portals();
    overworld->map = load_map_in_vertexarray(overworld->map_pieces, 191, 171);
    overworld->col = load_map_in_vertexarray(overworld->col_pieces, 191, 171);
    return (overworld);
}

all_maps_t  *init_all_maps(void)
{
    all_maps_t  *all_maps = malloc(sizeof(*all_maps));

    all_maps->overworld = init_overworld();
    return (all_maps);
}