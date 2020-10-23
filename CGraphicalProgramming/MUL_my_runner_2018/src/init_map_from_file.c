/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** init the map from a file
*/

#include "./../include/runner.h"

int **init_map_from_file(char *filepath)
{
    FILE    *fd = fopen(filepath, "r");
    size_t  n;
    char    *obstacles = NULL;
    int readed = 0;

    if (fd == NULL) {
        write(2, "File error !\n", 13);
        return (NULL);
    }
    readed = getline(&obstacles, &n, fd);
    obstacles[readed - 1] = '\0';
    if (obstacles == NULL) {
        write(2, "File error !\n", 13);
    } else if (check_map_conditions(obstacles) == 0)
        return (NULL);
    return (creat_obstacles_map(obstacles));
}
