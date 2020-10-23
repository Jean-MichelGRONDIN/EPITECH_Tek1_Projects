/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** manage all x in the map
*/

#include "./../include/sokoban.h"

int find_nb_of_x(char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == 'X') {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb);
}

int is_here_a_x(char *str, int *i)
{
    while (str[*i] != '\0') {
        if (str[*i] == 'X') {
            return (*i);
        }
        *i = *i + 1;
    }
    return (0);
}

int **malloc_x_position(int **position, int size)
{
    int i = 0;

    while (i != size) {
        position[i] = malloc(sizeof(int) * 2);
        i = i + 1;
    }
    return (position);
}

world_t *find_x_position(world_t *world, int i, int colomb)
{
    index_t *index = initialise_index();
    int **pos = malloc(sizeof(int *) * world->nb_x);

    pos = malloc_x_position(pos, world->nb_x);
    while (i != world->y_max) {
        colomb = is_here_a_x(world->map[i], &index->cols);
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
    world->x_pos = pos;
    return (world);
}
