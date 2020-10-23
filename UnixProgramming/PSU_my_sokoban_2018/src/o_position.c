/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** manage all o in the map
*/

#include "./../include/sokoban.h"

int find_nb_of_o(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == 'O') {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb);
}

int is_here_a_o(char *str, int *i)
{
    while (str[*i] != '\0') {
        if (str[*i] == 'O') {
            return (*i);
        }
        *i = *i + 1;
    }
    return (0);
}

int **malloc_o_position(int **position, int size)
{
    int i = 0;

    while (i != size) {
        position[i] = malloc(sizeof(int) * 2);
        i = i + 1;
    }
    return (position);
}

world_t *find_o_position(world_t *world, int i, int colomb)
{
    index_t *index = initialise_index();
    int **pos = malloc(sizeof(int *) * world->nb_o);

    pos = malloc_o_position(pos, world->nb_o);
    while (i != world->y_max) {
        colomb = is_here_a_o(world->map[i], &index->cols);
        if (colomb == 0) {
            i = i + 1;
            index->cols = 0;
        }
        if (colomb > 0) {
            pos[index->rows][0] = i;
            pos[index->rows][1] = colomb;
            index->cols = index->cols + 1;
            index->rows = index->rows + 1;
        }
        colomb = -1;
    }
    world->o_pos = pos;
    return (world);
}

world_t *check_all_o(world_t *world)
{
    int i = 0;

    while (i != world->nb_o) {
        if (world->map[world->o_pos[i][0]][world->o_pos[i][1]] == ' ') {
            world->map[world->o_pos[i][0]][world->o_pos[i][1]] = 'O';
        }
        i = i + 1;
    }
    return (world);
}
