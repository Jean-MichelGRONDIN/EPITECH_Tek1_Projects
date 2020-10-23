/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** load the map in mem
*/

#include "./../include/sokoban.h"

index_t *initialise_index(void)
{
    index_t *index = malloc(sizeof(*index));

    index->rows = 0;
    index->cols = 0;
    return (index);
}

int is_here_a_player(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == 'P') {
            return (i);
        }
        i = i + 1;
    }
    return (-84);
}

world_t *find_player_position(world_t *world)
{
    int i = 0;
    int colomb = 0;

    while (i != world->y_max) {
        colomb = is_here_a_player(world->map[i]);
        if (colomb != -84) {
            world->x = colomb;
            world->y = i;
            return (world);
        }
        i = i + 1;
    }
    return (world);
}

world_t *reset_the_map(world_t *world)
{
    world = free_the_map(world);
    world->map = load_2d_arr_from_file(world);
    world = find_player_position(world);
    return (world);
}

world_t *initialise_the_map(char const *filepath)
{
    world_t *world = malloc(sizeof(*world));

    world->x = 0;
    world->y = 0;
    world->str = load_file_in_mem(filepath);
    world = find_lenght(world);
    world->map = load_2d_arr_from_file(world);
    world = find_player_position(world);
    world->nb_o = find_nb_of_o(world->str);
    world = find_o_position(world, 0, -1);
    world->nb_x = find_nb_of_x(world->str);
    world = find_x_position(world, 0, -1);
    return (world);
}
