/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** creat the obstacle "map" (obstacles sorting order)
*/

#include "./../include/runner.h"

int find_nb_obstacles(char *map)
{
    int i  = 18;
    int nb = 0;

    while (map[i] != '\0') {
        if (my_is_in(map[i], "0123456789") == 1) {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb);
}

int **creat_obstacles_map(char *map)
{
    int nb = find_nb_obstacles(map);
    int **obs = alloc_2d_array_of_obstacles(nb);
    int i = 0;
    index_t is;

    is.rows = 0;
    is.cols = 0;
    while (map[i] != '\0') {
        if (my_is_in(map[i], "0123456789") == 1) {
            obs[is.rows][0] = map[i] - 48;
            obs[is.rows][1] = i * 96;
            is.rows = is.rows + 1;
            is.cols = 0;
        } else
            is.cols = is.cols + 1;
        i = i + 1;
    }
    free(map);
    return (obs);
}
