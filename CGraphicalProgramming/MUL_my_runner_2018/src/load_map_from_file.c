/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** load the map from a file
*/

#include "./../include/runner.h"

int load_map_from_file(char *filepath)
{
    ground_t    **texture = initialise_all_grounds();
    ground_t    **player = initialise_all_players_object();
    ground_t    **obstacles = initialise_all_obstacles();
    map_t   *world_gen = malloc(sizeof(*world_gen));

    world_gen->map = init_map_from_file(filepath);
    world_gen->index = 0;
    world_gen->position = 1800;
    if (world_gen->map == NULL) {
        return (84);
    }
    game_loop(texture, player, obstacles, world_gen);
    return (0);
}
